#pragma once

class IPersonBuilder
{
public:
    virtual void BuildHead() = 0;
    virtual void BuildBody() = 0;
    virtual void BuildLeftArm() = 0;
    virtual void BuildRightArm() = 0;
    virtual void BuildLeftLeg() = 0;
    virtual void BuildRightLeg() = 0;
};