#include "CLenovoComputer.h"

CLenovoComputer::CLenovoComputer()
{
}

CLenovoComputer::~CLenovoComputer()
{
}

void CLenovoComputer::InstallOS(IOperationSystem * os)
{
    std::cout << "Lenovo installing OS: " << std::endl;
    os->Install();
}