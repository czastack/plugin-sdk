/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CLink.h"

template<typename T>
class CLinkList {
public:
    CLink<T> usedListHead;
    CLink<T> usedListTail;
    CLink<T> freeListHead;
    CLink<T> freeListTail;
    CLink<T>* links;
};

VALIDATE_SIZE(CLinkList<void *>, 0x34);