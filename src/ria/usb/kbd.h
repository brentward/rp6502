/*
 * Copyright (c) 2023 Rumbledethumps
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _KBD_H_
#define _KBD_H_

#include "tusb.h"

void kbd_init(void);
void kbd_task(void);
void kbd_stop(void);
void kbd_report(uint8_t dev_addr, uint8_t instance, hid_keyboard_report_t const *report);
void kbd_hid_leds_dirty();
bool kbd_pix(uint16_t word);

#endif /* _KBD_H_ */
