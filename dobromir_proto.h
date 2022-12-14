#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define REPORT_SIZE_MAX 255

#define REPORT_PERIPHERALS_ID 1
struct report_peripherals
{
  uint8_t id;
  uint8_t joy_x;
  uint8_t joy_y;
  uint8_t buttons;
  uint8_t axis_z;
} __attribute__((packed));

#define REPORT_PING_ID 2
struct report_ping
{
  uint8_t id;
  uint8_t dummy;
} __attribute__((packed));

#define REPORT_PONG_ID 3
struct report_pong
{
  uint8_t id;
  uint8_t dummy;
} __attribute__((packed));

void init_report_peripherals(struct report_peripherals* report);
void init_report_ping(struct report_ping* report);
void init_report_pong(struct report_pong* report);

#ifdef __cplusplus
}
#endif
