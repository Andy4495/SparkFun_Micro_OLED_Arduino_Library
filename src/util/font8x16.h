/******************************************************************************
font8x16.h
Definition for medium font

This file was imported from the MicroView library, written by GeekAmmo
(https://github.com/geekammo/MicroView-Arduino-Library), and released under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Modified by:
Emil Varughese @ Edwin Robotics Pvt. Ltd.
July 27, 2015
https://github.com/emil01/SparkFun_Micro_OLED_Arduino_Library/

Modified by:
Andreas Taylor to make compatible with Energia IDE (TI MSP microcontrollers)
https://github.com/Andy4495/SparkFun_Micro_OLED_Arduino_Library
******************************************************************************/
#ifndef FONT8X16_H
#define FONT8X16_H

#if defined(__AVR__) || defined(__arm__) || defined(__ARDUINO_ARC__) || defined(ENERGIA)
	#include <avr/pgmspace.h>
#else
	#include <pgmspace.h>
#endif

static const unsigned char font8x16[] PROGMEM = {
	// first row defines - FONTWIDTH, FONTHEIGHT, ASCII START CHAR, TOTAL CHARACTERS, FONT MAP WIDTH HIGH, FONT MAP WIDTH LOW (2,56 meaning 256)
	8,16,32,96,2,56,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0xD0, 0xBE, 0x90, 0xD0, 0xBE, 0x90, 0x00,
	0x00, 0x1C, 0x62, 0xFF, 0xC2, 0x80, 0x00, 0x00, 0x0C, 0x12, 0x92, 0x4C, 0xB0, 0x88, 0x06, 0x00,
	0x80, 0x7C, 0x62, 0xB2, 0x1C, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x0E, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xE0, 0x18, 0x04, 0x02, 0x02, 0x00, 0x00, 0x00, 0x02, 0x02, 0x04, 0x18, 0xE0, 0x00, 0x00,
	0x00, 0x24, 0x18, 0x7E, 0x18, 0x24, 0x00, 0x00, 0x80, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x06, 0x00, 0x00,
	0xF8, 0x04, 0xC2, 0x32, 0x0C, 0xF8, 0x00, 0x00, 0x00, 0x04, 0x04, 0xFE, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x02, 0x82, 0x42, 0x22, 0x1C, 0x00, 0x00, 0x00, 0x02, 0x22, 0x22, 0x22, 0xDC, 0x00, 0x00,
	0xC0, 0xA0, 0x98, 0x84, 0xFE, 0x80, 0x80, 0x00, 0x00, 0x1E, 0x12, 0x12, 0x22, 0xC2, 0x00, 0x00,
	0xF8, 0x44, 0x22, 0x22, 0x22, 0xC0, 0x00, 0x00, 0x00, 0x02, 0x02, 0xC2, 0x32, 0x0A, 0x06, 0x00,
	0x00, 0x8C, 0x52, 0x22, 0x52, 0x8C, 0x00, 0x00, 0x3C, 0x42, 0x42, 0x42, 0x26, 0xF8, 0x00, 0x00,
	0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00,
	0x10, 0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x02, 0x82, 0x42, 0x22, 0x1C, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x04, 0x0F, 0x04, 0x03, 0x00, 0x00, 0x04, 0x02, 0x01, 0x03, 0x04, 0x04, 0x03, 0x00,
	0x03, 0x04, 0x04, 0x04, 0x05, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x06, 0x08, 0x10, 0x10, 0x00, 0x00, 0x00, 0x10, 0x10, 0x08, 0x06, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x16, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x03, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04, 0x04, 0x07, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x01, 0x02, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x0E, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x04, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
	0x04, 0x02, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xF8, 0x04, 0x72, 0x8A, 0xFA, 0x84, 0x78, 0x00, 0x00, 0xC0, 0x38, 0x06, 0x38, 0xC0, 0x00, 0x00,
	0x00, 0xFE, 0x22, 0x22, 0x22, 0xDC, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00,
	0xFE, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00, 0x00, 0xFE, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00,
	0x00, 0xFE, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x22, 0xE2, 0x00, 0x00,
	0xFE, 0x20, 0x20, 0x20, 0x20, 0xFE, 0x00, 0x00, 0x00, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x02, 0xFE, 0x00, 0x00, 0xFE, 0x40, 0xB0, 0x08, 0x04, 0x02, 0x00, 0x00,
	0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x0C, 0x70, 0x80, 0x70, 0x0C, 0xFE, 0x00,
	0xFE, 0x0C, 0x30, 0xC0, 0x00, 0xFE, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00,
	0xFE, 0x42, 0x42, 0x42, 0x22, 0x1C, 0x00, 0x00, 0xF8, 0x04, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x00,
	0x00, 0xFE, 0x42, 0x42, 0xA2, 0x1C, 0x00, 0x00, 0x00, 0x1C, 0x22, 0x42, 0x42, 0x80, 0x00, 0x00,
	0x02, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x02, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00,
	0x06, 0x38, 0xC0, 0x00, 0xC0, 0x38, 0x06, 0x00, 0x3E, 0xC0, 0xF0, 0x0E, 0xF0, 0xC0, 0x3E, 0x00,
	0x00, 0x06, 0x98, 0x60, 0x98, 0x06, 0x00, 0x00, 0x00, 0x06, 0x18, 0xE0, 0x18, 0x06, 0x00, 0x00,
	0x02, 0x02, 0xC2, 0x32, 0x0A, 0x06, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x00,
	0x00, 0x06, 0x18, 0x60, 0x80, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x00, 0x00, 0x00,
	0x40, 0x30, 0x0C, 0x0C, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x02, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x06, 0x01, 0x01, 0x01, 0x01, 0x01, 0x06, 0x00,
	0x00, 0x07, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x01, 0x02, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
	0x07, 0x04, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x04, 0x04, 0x07, 0x00, 0x00,
	0x07, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x04, 0x07, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x01, 0x02, 0x04, 0x00, 0x00,
	0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00, 0x07, 0x00,
	0x07, 0x00, 0x00, 0x00, 0x03, 0x07, 0x00, 0x00, 0x01, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00,
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0C, 0x12, 0x11, 0x10, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
	0x00, 0x06, 0x01, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
	0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x00, 0x10, 0x10, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00,
	0x00, 0xFE, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00,
	0x00, 0xE0, 0x10, 0x10, 0x10, 0xFE, 0x00, 0x00, 0x00, 0xE0, 0x90, 0x90, 0x90, 0xE0, 0x00, 0x00,
	0x00, 0x20, 0xFC, 0x22, 0x22, 0x22, 0x02, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00,
	0x00, 0xFE, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x10, 0x10, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x10, 0x10, 0x10, 0xF2, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x80, 0x40, 0x20, 0x10, 0x00, 0x00,
	0x00, 0x02, 0x02, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x20, 0x10, 0xF0, 0x20, 0x10, 0xF0, 0x00,
	0x00, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xE0, 0x00, 0x00,
	0x00, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00,
	0x00, 0xF0, 0x20, 0x10, 0x10, 0x70, 0x00, 0x00, 0x00, 0x60, 0x90, 0x90, 0x90, 0x20, 0x00, 0x00,
	0x00, 0x20, 0x20, 0xFC, 0x20, 0x20, 0x20, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
	0x00, 0x70, 0x80, 0x00, 0x80, 0x70, 0x00, 0x00, 0xF0, 0x00, 0xC0, 0x30, 0xC0, 0x00, 0xF0, 0x00,
	0x00, 0x30, 0xC0, 0xC0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x30, 0xC0, 0x00, 0x80, 0x70, 0x00, 0x00,
	0x00, 0x10, 0x10, 0x90, 0x50, 0x30, 0x00, 0x00, 0x00, 0x80, 0x80, 0x7E, 0x02, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x7E, 0x80, 0x80, 0x00, 0x00,
	0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x02, 0x07, 0x00, 0x00,
	0x00, 0x07, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x03, 0x04, 0x04, 0x02, 0x07, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x24, 0x24, 0x22, 0x1F, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x00, 0x00, 0x00,
	0x20, 0x20, 0x20, 0x20, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x01, 0x02, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x3F, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x02, 0x3F, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x04, 0x04, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x00, 0x00, 0x03, 0x04, 0x04, 0x02, 0x07, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x04, 0x03, 0x00, 0x00, 0x00, 0x01, 0x06, 0x01, 0x00, 0x01, 0x06, 0x01, 0x00,
	0x00, 0x06, 0x01, 0x01, 0x06, 0x00, 0x00, 0x00, 0x20, 0x20, 0x31, 0x0E, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x06, 0x05, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x10, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
#endif
