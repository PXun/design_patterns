#include "CElevatorRun.h"
#include "CElevatorStop.h"
#include "CElevatorContext.h"

CElevatorRun::CElevatorRun()
{
}

CElevatorRun::~CElevatorRun()
{
}

void CElevatorRun::Open(CElevatorContext * pContext)
{
    std::cout << "Run -> Open: The elevator is run, can`t open" << std::endl;
}

void CElevatorRun::Close(CElevatorContext * pContext)
{
    std::cout << "Run -> Close: The elevator is run, alreadly close" << std::endl;
}

void CElevatorRun::Run(CElevatorContext * pContext)
{
    std::cout << "Run -> Run: The elevator is alreadly run" << std::endl;
}

void CElevatorRun::Stop(CElevatorContext * pContext)
{
    std::cout << "Run -> Stop: Stop the elevator" << std::endl;
    pContext->SetState(new CElevatorStop);
}