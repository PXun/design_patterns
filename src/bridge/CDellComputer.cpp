#include "CDellComputer.h"

CDellComputer::CDellComputer()
{
}

CDellComputer::~CDellComputer()
{
}

void CDellComputer::InstallOS(IOperationSystem * os)
{
    std::cout << "Dell installing OS: " << std::endl;
    os->Install();
}