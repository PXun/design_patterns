#pragma once
#include <iostream>

class CElevatorContext;

class IElevatorState
{
public:
    virtual void Open(CElevatorContext * pContext) = 0;
    virtual void Close(CElevatorContext * pContext) = 0;
    virtual void Run(CElevatorContext * pContext) = 0;
    virtual void Stop(CElevatorContext * pContext) = 0;
};

