#pragma once
#include "IFruits.h"

class CBanana : public IFruits
{
public:
    CBanana();
    ~CBanana();

public:
    virtual void ShowName();
};