#pragma once
#include "IFruitsFactory.h"

class CAppleFactory : public IFruitsFactory
{
public:
    CAppleFactory();
    ~CAppleFactory();

public:
    virtual IFruits * CreateFruit();
};