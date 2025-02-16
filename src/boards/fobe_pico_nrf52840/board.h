/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2024 ChihoSin for FoBE
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _FOBE_DEVKIT_NRF82540_H_
#define _FOBE_DEVKIT_NRF82540_H_

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           1  // User LED
#define LED_PRIMARY_PIN       _PINNUM(0, 24)
#define LED_STATE_ON          0

#define LED_NEOPIXEL           _PINNUM(0, 13)
#define NEOPIXELS_NUMBER      1
#define BOARD_RGB_BRIGHTNESS  0x040404
/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(1, 12)  // P1.12: NC
#define BUTTON_2              _PINNUM(1, 14)  // P1.14: NC
#define BUTTON_PULL           NRF_GPIO_PIN_PULLDOWN

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "FoBE"
#define BLEDIS_MODEL          "FoBE Pico nRF52840"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID            0x1209
#define USB_DESC_UF2_PID        0x0001 // Test PID
#define USB_DESC_CDC_ONLY_PID   0x0001 // Test PID

//--------------------------------------------------------------------+
// UF2
//--------------------------------------------------------------------+
#define UF2_PRODUCT_NAME        "FoBE Pico nRF52840"
#define UF2_VOLUME_LABEL        "Pico Boot"
#define UF2_BOARD_ID            "FoBE-Pico-nRF52840"
#define UF2_INDEX_URL           "https://docs.nordicsemi.com/bundle/ps_nrf52840/page/keyfeatures_html5.html"


#endif /* _FOBE_DEVKIT_NRF82540_H_ */
