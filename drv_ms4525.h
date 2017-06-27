/*
   drv_ms4525.h : driver for MS4525 Differential Pressure Sensor

   This file is part of BreezySTM32.

   BreezySTM32 is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   BreezySTM32 is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with BreezySTM32.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdint.h>

#pragma once

bool ms4525_init(void);
void ms4525_set_atm(uint32_t pressure_Pa);

// Blocking I2C function
void ms4525_update();
void ms4525_read(float *differential_pressure, float *temp, float* velocity);
void ms4525_start_calibration();
bool ms4525_calibrated();

// Asynchronous I2C function
void ms4525_async_update(void);
int16_t ms4525_read_velocity(void);
int16_t ms4525_read_temperature(void);
void ms4525_present(void);
