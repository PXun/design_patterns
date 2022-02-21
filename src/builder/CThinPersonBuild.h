#pragma once
#include "IPersonBuilder.h"

class CThinPersonBuild : public IPersonBuilder
{
public:
    virtual void BuildHead();
    virtual void BuildBody();
    virtual void BuildLeftArm();
    virtual void BuildRightArm();
    virtual void BuildLeftLeg();
    virtual void BuildRightLeg();
};