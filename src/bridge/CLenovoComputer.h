#pragma once
#include "IComputer.h"

class CLenovoComputer : public IComputer
{
public:
    CLenovoComputer();
    ~CLenovoComputer();

public:
    virtual void InstallOS(IOperationSystem * os);
};