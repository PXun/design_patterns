#include "CElevatorContext.h"

CElevatorContext::CElevatorContext()
{
}

CElevatorContext::~CElevatorContext()
{
}

void CElevatorContext::SetState(IElevatorState * pState)
{
    if(nullptr != m_pState)
    {
        delete m_pState;
        m_pState = nullptr;
    }

    m_pState = pState;
}

void CElevatorContext::Open()
{
    m_pState->Open(this);
}

void CElevatorContext::Close()
{
    m_pState->Close(this);
}

void CElevatorContext::Run()
{
    m_pState->Run(this);
}

void CElevatorContext::Stop()
{
    m_pState->Stop(this);
}