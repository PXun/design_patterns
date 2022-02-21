#pragma once
#include "IElevatorState.h"

class CElevatorClose : public IElevatorState
{
public:
    CElevatorClose();
    ~CElevatorClose();

public:
    virtual void Open(CElevatorContext * pContext);
    virtual void Close(CElevatorContext * pContext);
    virtual void Run(CElevatorContext * pContext);
    virtual void Stop(CElevatorContext * pContext);
};