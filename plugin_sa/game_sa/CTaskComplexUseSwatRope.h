/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexUseSwatRope : public CTaskComplex {
protected:
    CTaskComplexUseSwatRope(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexUseSwatRope, 0x);