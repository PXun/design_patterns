#pragma once
#include "IElevatorState.h"

class CElevatorStop : public IElevatorState
{
public:
    CElevatorStop();
    ~CElevatorStop();

public:
    virtual void Open(CElevatorContext * pContext);
    virtual void Close(CElevatorContext * pContext);
    virtual void Run(CElevatorContext * pContext);
    virtual void Stop(CElevatorContext * pContext);
};