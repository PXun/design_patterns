#pragma once
#include "IFruits.h"

class CApple : public IFruits
{
public:
    CApple();
    ~CApple();

public:
    virtual void ShowName();
};