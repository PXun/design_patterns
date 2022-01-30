#pragma once
#include "IBeverage.h"

class ICondiment  : public IBeverage
{
public:
    virtual unsigned int GetCount() = 0;
    virtual void SetCount(unsigned int uiCount) = 0;
};