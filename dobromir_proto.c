#include "dobromir_proto.h"

void init_report_peripherals(struct report_peripherals* report)
{
  report->id = REPORT_PERIPHERALS_ID;
  report->joy_x = 0;
  report->joy_y = 0;
  report->axis_z = 0;
  report->buttons = 0;
} 

void init_report_ping(struct report_ping* report)
{
  report->id = REPORT_PING_ID;
  report->dummy = 0x9;
}

void init_report_pong(struct report_pong* report)
{
  report->id = REPORT_PONG_ID;
  report->dummy = 0xa;
}
