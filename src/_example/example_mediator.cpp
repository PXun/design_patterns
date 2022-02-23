#include <iostream>
#include "../mediator/CUSA.h"
#include "../mediator/CIraq.h"
#include "../mediator/CConcreteMediator.h"

int main(int, char**) 
{
    CConcreteMediator * mediator = new CConcreteMediator();

    CUSA * usa = new CUSA(mediator);
    CIraq * iraq = new CIraq(mediator);

    mediator->SetUSA(usa);
    mediator->SetIraq(iraq);

    std::cout << "---------------------------------------------" << std::endl;
    usa->declare("不准研制核武器，否则要发动战争！");

    std::cout << "---------------------------------------------" << std::endl;
    iraq->declare("我们没有核武器，也不怕侵略！");

    delete iraq;
    delete usa;
    delete mediator;

    return 0;
}
