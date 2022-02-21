#pragma once
#include "IElevatorState.h"

class CElevatorOpen : public IElevatorState
{
public:
    CElevatorOpen();
    ~CElevatorOpen();

public:
    virtual void Open(CElevatorContext * pContext);
    virtual void Close(CElevatorContext * pContext);
    virtual void Run(CElevatorContext * pContext);
    virtual void Stop(CElevatorContext * pContext);
};