#pragma once
#include "IElevatorState.h"

class CElevatorRun : public IElevatorState
{
public:
    CElevatorRun();
    ~CElevatorRun();

public:
    virtual void Open(CElevatorContext * pContext);
    virtual void Close(CElevatorContext * pContext);
    virtual void Run(CElevatorContext * pContext);
    virtual void Stop(CElevatorContext * pContext);
};