#include <iostream>
#include "../facade/CFacade.h"

int main(int, char**) 
{
    CFacade facade;

    std::cout << "Call MethodA: " << std::endl;
    facade.MethodA();
    std::cout << "Call MethodB: " << std::endl;
    facade.MethodB();

    return 0;
}
