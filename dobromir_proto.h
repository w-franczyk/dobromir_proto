#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
  
#define REPORT_PERIPHERALS_ID 1
struct report_peripherals
{
  uint8_t id;
  uint8_t joy_x;
  uint8_t joy_y;
  uint8_t buttons;
  uint8_t axis_z;
} __attribute((packed))__;

void init_report_peripherals(struct report_peripherals* report);



#ifdef __cplusplus
}
#endif
