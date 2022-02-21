#include <iostream>
#include "../state/CElevatorContext.h"
#include "../state/CElevatorOpen.h"
#include "../state/CElevatorClose.h"
#include "../state/CElevatorRun.h"
#include "../state/CElevatorStop.h"

int main(int, char**) 
{
    CElevatorOpen   * open  = new CElevatorOpen;
    CElevatorClose  * close = new CElevatorClose;
    CElevatorRun    * run   = new CElevatorRun;
    CElevatorStop   * stop  = new CElevatorStop;

    CElevatorContext * pContext = new CElevatorContext;

    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Open" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    pContext->SetState(open);
    pContext->Open();
    pContext->Close();
    pContext->Run();
    pContext->Stop();
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Close" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    pContext->SetState(close);
    pContext->Open();
    pContext->Close();
    pContext->Run();
    pContext->Stop();
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Run" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    pContext->SetState(run);
    pContext->Open();
    pContext->Close();
    pContext->Run();
    pContext->Stop();
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Stop" << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
    pContext->SetState(stop);
    pContext->Open();
    pContext->Close();
    pContext->Run();
    pContext->Stop();

    return 0;
}
