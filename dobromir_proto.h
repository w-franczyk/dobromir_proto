#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct dbr_usb_request_hdr
{
    uint8_t request_type;
    uint8_t request_nb;
    uint16_t value;
    uint16_t index;
    uint16_t length;
};


#ifdef __cplusplus
}
#endif
