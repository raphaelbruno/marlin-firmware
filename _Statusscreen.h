/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#define STATUS_LOGO_WIDTH 32

//============================================

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000, // ................................
  B00001111,B11111111,B01111111,B11100000, // ....############.##########.....
  B00000111,B11111111,B01111111,B11000000, // .....###########.#########......
  B00000000,B01100000,B11101101,B11000000, // .........##.....###.##.###......
  B00000011,B01110110,B11011011,B10000000, // ......##.###.##.##.##.###.......
  B00000011,B10110111,B01011011,B00000000, // ......###.##.###.#.##.##........
  B00000001,B10111011,B00110111,B00000000, // .......##.###.##..##.###........
  B00000001,B11011011,B11110110,B00000000, // .......###.##.######.##.........
  B00000000,B11011101,B11101110,B00000000, // ........##.###.####.###.........
  B00000000,B01101101,B11101100,B00000000, // .........##.##.####.##..........
  B00000000,B01110110,B11011000,B00000000, // .........###.##.##.##...........
  B00000000,B00110111,B01101000,B00000000, // ..........##.###.##.#...........
  B00000000,B00111011,B01110000,B00000000, // ..........###.##.###............
  B00000000,B00011011,B01110000,B00000000, // ...........##.##.###............
  B00000000,B00011101,B01100000,B00000000, // ...........###.#.##.............
  B00000000,B00001110,B11100000,B00000000, // ............###.###.............
  B00000000,B00000111,B11000000,B00000000, // .............#####..............
  B00000000,B00000111,B10000000,B00000000, // .............####...............
  B00000000,B00000011,B10000000,B00000000, // ..............###...............
  B00000000,B00000011,B00000000,B00000000, // ..............##................
  B00000000,B00000000,B00000000,B00000000, // ................................
  B11111111,B11111111,B11111111,B11111110, // ###############################.
  B11110000,B01111111,B11111111,B11111110, // ####.....######################.
  B11111101,B11111111,B11111111,B11111110, // ######.########################.
  B11111101,B11100011,B01110110,B00111110, // ######.####...##.###.##...#####.
  B11111101,B11011101,B01110101,B11011110, // ######.###.###.#.###.#.###.####.
  B11111101,B11000011,B01110101,B11011110, // ######.###....##.###.#.###.####.
  B11111101,B11011111,B10101101,B11011110, // ######.###.######.#.##.###.####.
  B11111101,B11100011,B11011110,B00111110  // ######.####...####.####...#####.
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#define STATUS_HEATERS_X      44
#define STATUS_BED_X          72
