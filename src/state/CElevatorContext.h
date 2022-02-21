#pragma once
#include "IElevatorState.h"

class CElevatorContext
{
public:
    CElevatorContext();
    ~CElevatorContext();

public:
    void SetState(IElevatorState * pState);

public:
    void Open();
    void Close();
    void Run();
    void Stop();

private:
    IElevatorState * m_pState = nullptr;
};