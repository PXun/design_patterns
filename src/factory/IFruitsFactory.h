#pragma once
#include "IFruits.h"

class IFruitsFactory
{
public:
    virtual IFruits * CreateFruit() = 0;
};