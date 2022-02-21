#include "CElevatorStop.h"
#include "CElevatorOpen.h"
#include "CElevatorRun.h"
#include "CElevatorContext.h"

CElevatorStop::CElevatorStop()
{
}

CElevatorStop::~CElevatorStop()
{
}

void CElevatorStop::Open(CElevatorContext * pContext)
{
    std::cout << "Stop -> Open: Open the elevator" << std::endl;
    pContext->SetState(new CElevatorOpen);
}

void CElevatorStop::Close(CElevatorContext * pContext)
{
    std::cout << "Stop -> Close: The elevator is stop, alreadly close" << std::endl;
}

void CElevatorStop::Run(CElevatorContext * pContext)
{
    std::cout << "Stop -> Run: Run the elevator" << std::endl;
    pContext->SetState(new CElevatorRun);
}

void CElevatorStop::Stop(CElevatorContext * pContext)
{
    std::cout << "Stop -> Stop: The elevator is alreadly stop" << std::endl;
}