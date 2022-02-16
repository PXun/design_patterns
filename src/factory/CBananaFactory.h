#pragma once
#include "IFruitsFactory.h"

class CBananaFactory : public IFruitsFactory
{
public:
    CBananaFactory();
    ~CBananaFactory();

public:
    virtual IFruits * CreateFruit();
};