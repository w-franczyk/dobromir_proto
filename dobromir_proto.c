#include "dobromir_proto.h"

void init_report_peripherals(struct report_peripherals* report)
{
  *report = {REPORT_PERIPHERALS_ID, 0, 0, 0, 0};
} 
