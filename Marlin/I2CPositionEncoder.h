/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016, 2017 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

#ifndef I2CPOSENC_H
#define I2CPOSENC_H

#include "MarlinConfig.h"

#if ENABLED(I2C_POSITION_ENCODERS)

  #include "enum.h"
  #include "macros.h"
  #include "types.h"
  #include <Wire.h>

  

class I2CPositionEncodersMgr {
  private:
    static const uint8_t I2CPE_addr = ENCODER_ADDR;
    
  public:
    static float position_joint[Joint_All];

    static void init(void);

    static void update(void);

    void get_raw_count(float (&joint)[Joint_All]);

    /*
    static void report_position(const int8_t idx, const bool units, const bool noOffset);
    
    static void report_status(const int8_t idx) {
      CHECK_IDX();
      SERIAL_ECHOPAIR("Encoder ",idx);
      SERIAL_ECHOPGM(": ");
      encoders[idx].get_raw_count();
      encoders[idx].passes_test(true);
    }

    

    static int8_t parse();

    static void M860();
    static void M861();
    static void M862();
    static void M863();
    static void M864();
    static void M865();
    static void M866();
    static void M867();
    static void M868();
    static void M869();
    */
  };

  extern I2CPositionEncodersMgr I2CPEM;

  FORCE_INLINE static void gcode_M860() { ;}//I2CPEM.M860(); }
  FORCE_INLINE static void gcode_M861() { ;}//I2CPEM.M861(); }
  FORCE_INLINE static void gcode_M862() { ;}//I2CPEM.M862(); }
  FORCE_INLINE static void gcode_M863() { ;}//I2CPEM.M863(); }
  FORCE_INLINE static void gcode_M864() { ;}//I2CPEM.M864(); }
  FORCE_INLINE static void gcode_M865() { ;}//I2CPEM.M865(); }
  FORCE_INLINE static void gcode_M866() { ;}//I2CPEM.M866(); }
  FORCE_INLINE static void gcode_M867() { ;}//I2CPEM.M867(); }
  FORCE_INLINE static void gcode_M868() { ;}//I2CPEM.M868(); }
  FORCE_INLINE static void gcode_M869() { ;}//I2CPEM.M869(); }

#endif //I2C_POSITION_ENCODERS
#endif //I2CPOSENC_H
