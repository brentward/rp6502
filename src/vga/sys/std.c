/*
 * Copyright (c) 2023 Rumbledethumps
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <sys/ria.h>
#include <sys/std.h>
#include <stddef.h>
#include <stdint.h>

#define STD_IN_BUF_SIZE 32
size_t std_in_head;
size_t std_in_tail;
uint8_t std_in_buf[STD_IN_BUF_SIZE];
#define STD_IN_BUF(pos) std_in_buf[(pos) & (STD_IN_BUF_SIZE - 1)]

#define STD_OUT_BUF_SIZE 32
size_t std_out_tail;
size_t std_out_head;
uint8_t std_out_buf[STD_OUT_BUF_SIZE];
#define STD_OUT_BUF(pos) std_out_buf[(pos) & (STD_OUT_BUF_SIZE - 1)]

bool is_breaking;

size_t std_in_free(void)
{
    return ((std_in_tail + 0) - (std_in_head + 1)) & (STD_IN_BUF_SIZE - 1);
}

bool std_in_empty(void)
{
    return &STD_IN_BUF(std_in_head) == &STD_IN_BUF(std_in_tail);
}

bool std_in_writable(void)
{
    return &STD_IN_BUF(std_in_head + 1) != &STD_IN_BUF(std_in_tail);
}

void std_in_write(char ch)
{
    STD_IN_BUF(++std_in_head) = ch;
}

size_t std_out_free(void)
{
    return ((std_out_head + 0) - (std_out_tail + 1)) & (STD_OUT_BUF_SIZE - 1);
}

bool std_out_empty(void)
{
    return &STD_OUT_BUF(std_out_tail) == &STD_OUT_BUF(std_out_head);
}

bool std_out_writable(void)
{
    return &STD_OUT_BUF(std_out_tail + 1) != &STD_OUT_BUF(std_out_head);
}

void std_out_write(char ch)
{
    STD_OUT_BUF(++std_out_tail) = ch;
    putchar_raw(ch);
}

char std_out_peek()
{
    return STD_OUT_BUF(std_out_head + 1);
}

char std_out_read()
{
    return STD_OUT_BUF(++std_out_head);
}

void std_init(void)
{
    gpio_set_function(STD_UART_TX, GPIO_FUNC_UART);
    gpio_set_function(STD_UART_RX, GPIO_FUNC_UART);
    uart_init(STD_UART_INTERFACE, STD_UART_BAUDRATE);
}

void std_reclock(void)
{
    uart_init(STD_UART_INTERFACE, STD_UART_BAUDRATE);
}

void std_set_break(bool en)
{
    uart_set_break(STD_UART_INTERFACE, en);
    is_breaking = en;
}

void std_task()
{
    if (!std_in_empty() && uart_is_writable(STD_UART_INTERFACE))
        uart_get_hw(STD_UART_INTERFACE)->dr = STD_IN_BUF(++std_in_tail);

    if (ria_backchannel())
    {
        while (uart_is_readable(STD_UART_INTERFACE))
            uart_getc(STD_UART_INTERFACE);
        while (ria_stdout_is_readable() && std_out_writable())
            std_out_write(ria_stdout_getc());
    }
    else
    {
        while (ria_stdout_is_readable())
            ria_stdout_getc();
        while (uart_is_readable(STD_UART_INTERFACE) && std_out_writable())
            std_out_write(uart_getc(STD_UART_INTERFACE));
    }
}
