/*
 * Copyright (c) 2023 Rumbledethumps
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _KBD_DEU_H_
#define _KBD_DEU_H_

// German / Deutsch

// KEYCODE to Unicode Conversion
// {without shift, with shift, with altGr}

#define HID_KEYCODE_TO_UNICODE_DE         HID_KEYCODE_TO_UNICODE_DEU_QWERTZ
#define HID_KEYCODE_TO_UNICODE_DE_QWERTZ  HID_KEYCODE_TO_UNICODE_DEU_QWERTZ
#define HID_KEYCODE_TO_UNICODE_DEU        HID_KEYCODE_TO_UNICODE_DEU_QWERTZ

#define HID_KEYCODE_TO_UNICODE_DEU_QWERTZ                  \
        {0, 0, 0},             /* 0x00 */                  \
        {0, 0, 0},             /* 0x01 */                  \
        {0, 0, 0},             /* 0x02 */                  \
        {0, 0, 0},             /* 0x03 */                  \
        {'a', 'A', 0},         /* 0x04 */                  \
        {'b', 'B', 0},         /* 0x05 */                  \
        {'c', 'C', 0},         /* 0x06 */                  \
        {'d', 'D', 0},         /* 0x07 */                  \
        {'e', 'E', 0x20AC},    /* 0x08 */                  \
        {'f', 'F', 0},         /* 0x09 */                  \
        {'g', 'G', 0},         /* 0x0a */                  \
        {'h', 'H', 0},         /* 0x0b */                  \
        {'i', 'I', 0},         /* 0x0c */                  \
        {'j', 'J', 0},         /* 0x0d */                  \
        {'k', 'K', 0},         /* 0x0e */                  \
        {'l', 'L', 0},         /* 0x0f */                  \
        {'m', 'M', 0x00B5},    /* 0x10 */                  \
        {'n', 'N', 0},         /* 0x11 */                  \
        {'o', 'O', 0},         /* 0x12 */                  \
        {'p', 'P', 0},         /* 0x13 */                  \
        {'q', 'Q', 0x0040},    /* 0x14 */                  \
        {'r', 'R', 0},         /* 0x15 */                  \
        {'s', 'S', 0},         /* 0x16 */                  \
        {'t', 'T', 0},         /* 0x17 */                  \
        {'u', 'U', 0},         /* 0x18 */                  \
        {'v', 'V', 0},         /* 0x19 */                  \
        {'w', 'W', 0},         /* 0x1a */                  \
        {'x', 'X', 0},         /* 0x1b */                  \
        {'z', 'Z', 0},         /* 0x1c  GER */             \
        {'y', 'Y', 0},         /* 0x1d  GER */             \
        {'1', '!', 0},         /* 0x1e */                  \
        {'2', '"', 0x00B2},    /* 0x1f  GER */             \
        {'3', 0x00A7, 0x00B3},    /* 0x20  GER  '§' */     \
        {'4', '$', 0},         /* 0x21 */                  \
        {'5', '%', 0},         /* 0x22 */                  \
        {'6', '&', 0},         /* 0x23  GER */             \
        {'7', '/', '{'},       /* 0x24  GER */             \
        {'8', '(', '['},       /* 0x25  GER */             \
        {'9', ')', ']'},       /* 0x26  GER */             \
        {'0', '=', '}'},       /* 0x27  GER */             \
        {'\r', '\r', 0},       /* 0x28 */                  \
        {'\x1b', '\x1b', 0},   /* 0x29 */                  \
        {'\b', '\b', 0},       /* 0x2a */                  \
        {'\t', '\t', 0},       /* 0x2b */                  \
        {' ', ' ', 0},         /* 0x2c */                  \
        {0x00DF, '?', 0x005C}, /* 0x2d  GER  'ß' */        \
        {0x00B4, '`', 0},      /* 0x2e  GER  '´' */        \
        {0x00FC, 0x00DC, 0},   /* 0x2f  GER  'ü' + 'Ü'*/   \
        {'+', '*', '~'},       /* 0x30  GER */             \
        {'#', '#', 0},         /* 0x31  GER */             \
        {'#', '~', 0},         /* 0x32 */                  \
        {0x00F6, 0x00D6, 0},   /* 0x33  GER  'ö' + 'Ü'*/   \
        {0x00E4, 0x00C4, 0},   /* 0x34  GER  'ä' + 'Ü'*/   \
        {'^', 0x00B0, 0},      /* 0x35  GER  '°' */        \
        {',', ';', 0},         /* 0x36  GER */             \
        {'.', ':', 0},         /* 0x37  GER */             \
        {'-', '_', 0},         /* 0x38  GER */             \
                                                           \
        {0, 0, 0}, /* 0x39 */                              \
        {0, 0, 0}, /* 0x3a */                              \
        {0, 0, 0}, /* 0x3b */                              \
        {0, 0, 0}, /* 0x3c */                              \
        {0, 0, 0}, /* 0x3d */                              \
        {0, 0, 0}, /* 0x3e */                              \
        {0, 0, 0}, /* 0x3f */                              \
        {0, 0, 0}, /* 0x40 */                              \
        {0, 0, 0}, /* 0x41 */                              \
        {0, 0, 0}, /* 0x42 */                              \
        {0, 0, 0}, /* 0x43 */                              \
        {0, 0, 0}, /* 0x44 */                              \
        {0, 0, 0}, /* 0x45 */                              \
        {0, 0, 0}, /* 0x46 */                              \
        {0, 0, 0}, /* 0x47 */                              \
        {0, 0, 0}, /* 0x48 */                              \
        {0, 0, 0}, /* 0x49 */                              \
        {0, 0, 0}, /* 0x4a */                              \
        {0, 0, 0}, /* 0x4b */                              \
        {0, 0, 0}, /* 0x4c */                              \
        {0, 0, 0}, /* 0x4d */                              \
        {0, 0, 0}, /* 0x4e */                              \
        {0, 0, 0}, /* 0x4f */                              \
        {0, 0, 0}, /* 0x50 */                              \
        {0, 0, 0}, /* 0x51 */                              \
        {0, 0, 0}, /* 0x52 */                              \
        {0, 0, 0}, /* 0x53 */                              \
                                                           \
        {'/', '/', 0},   /* 0x54 */                        \
        {'*', '*', 0},   /* 0x55 */                        \
        {'-', '-', 0},   /* 0x56 */                        \
        {'+', '+', 0},   /* 0x57 */                        \
        {'\r', '\r', 0}, /* 0x58 */                        \
        {'1', 0, 0},     /* 0x59 */                        \
        {'2', 0, 0},     /* 0x5a */                        \
        {'3', 0, 0},     /* 0x5b */                        \
        {'4', 0, 0},     /* 0x5c */                        \
        {'5', '5', 0},   /* 0x5d */                        \
        {'6', 0, 0},     /* 0x5e */                        \
        {'7', 0, 0},     /* 0x5f */                        \
        {'8', 0, 0},     /* 0x60 */                        \
        {'9', 0, 0},     /* 0x61 */                        \
        {'0', 0, 0},     /* 0x62 */                        \
        {'.', 0, 0},     /* 0x63 */                        \
        {'<', '>', '|'}, /* 0x64  GER */                   \
        {0, 0, 0},       /* 0x65 */                        \
        {0, 0, 0},       /* 0x66 */                        \
        {'=', '=', 0},   /* 0x67 */

#endif /* _KBD_DE_H_ */
