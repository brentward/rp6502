/*
 * Copyright (c) 2023 Rumbledethumps
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _AUD_H_
#define _AUD_H_

#include <stdint.h>
#include <stdbool.h>

// Audio output pins, PWM stereo
#define AUD_L_PIN 28
#define AUD_R_PIN 27
// IRQ pin used for PWM IRQ timer only, no IO
#define AUD_IRQ_PIN 14

// Kernel events
void aud_init();
void aud_task();
void aud_reclock(uint32_t sys_clk_khz);

#endif /* _AUD_H_ */
