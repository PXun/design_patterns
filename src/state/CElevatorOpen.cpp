#include "CElevatorOpen.h"
#include "CElevatorClose.h"
#include "CElevatorContext.h"

CElevatorOpen::CElevatorOpen()
{
}

CElevatorOpen::~CElevatorOpen()
{
}

void CElevatorOpen::Open(CElevatorContext * pContext)
{
    std::cout << "Open -> Open: The elevator is alreadly open" << std::endl;
}

void CElevatorOpen::Close(CElevatorContext * pContext)
{
    std::cout << "Open -> Close: Close the elevator" << std::endl;
    pContext->SetState(new CElevatorClose);
}

void CElevatorOpen::Run(CElevatorContext * pContext)
{
    std::cout << "Open -> Run: The elevator is open, can`t run" << std::endl;
}

void CElevatorOpen::Stop(CElevatorContext * pContext)
{
    std::cout << "Open -> Stop: The elevator is open, can`t stop" << std::endl;
}