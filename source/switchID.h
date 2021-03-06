#ifndef __SWITCHID_H__
#define __SWITCHID_H__

#include <stdint.h>

enum ESwitchID
{
    kSw_None,

    kSwA_1,
    kSwA_2,
    
    kSwB_1,
    kSwB_2,

    kSwC_1,
    kSwC_2,
    kSwC_3,
    kSwC_1_2,
    kSwC_2_3,

    kSwD_1,
    kSwD_2,

    _kSw_Max
};

extern const char *gSwitchNames[_kSw_Max];

int switchIsActive(uint8_t id); // id should be a ESwitchID value

#endif // __SWITCHID_H__
