#pragma once
#include "IOperationSystem.h"

class CLinuxOS : public IOperationSystem
{
public:
    CLinuxOS();
    ~CLinuxOS();

public:
    virtual void Install();
};