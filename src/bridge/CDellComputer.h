#pragma once
#include "IComputer.h"

class CDellComputer : public IComputer
{
public:
    CDellComputer();
    ~CDellComputer();

public:
    virtual void InstallOS(IOperationSystem * os);
};