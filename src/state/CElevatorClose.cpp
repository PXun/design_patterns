#include "CElevatorClose.h"
#include "CElevatorOpen.h"
#include "CElevatorRun.h"
#include "CElevatorStop.h"
#include "CElevatorContext.h"

CElevatorClose::CElevatorClose()
{
}

CElevatorClose::~CElevatorClose()
{
}

void CElevatorClose::Open(CElevatorContext * pContext)
{
    std::cout << "Close -> Open: Open the elevator" << std::endl;
    pContext->SetState(new CElevatorOpen);
}

void CElevatorClose::Close(CElevatorContext * pContext)
{
    std::cout << "Close -> Close: The elevator is alreadly close" << std::endl;
}

void CElevatorClose::Run(CElevatorContext * pContext)
{
    std::cout << "Close -> Run: Run the elevator" << std::endl;
    pContext->SetState(new CElevatorRun);
}

void CElevatorClose::Stop(CElevatorContext * pContext)
{
    std::cout << "Close -> Stop: Stop the elevator" << std::endl;
    pContext->SetState(new CElevatorStop);
}