#pragma once
#include "IOperationSystem.h"

class IComputer
{
public:
    virtual void InstallOS(IOperationSystem * os) = 0;
};