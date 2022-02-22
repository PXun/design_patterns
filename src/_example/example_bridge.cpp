#include <iostream>
#include "../bridge/CDellComputer.h"
#include "../bridge/CLenovoComputer.h"
#include "../bridge/CLinuxOS.h"
#include "../bridge/CWinodwsOS.h"

int main(int, char**) 
{
    IComputer * dell = new CDellComputer();
    IComputer * lenovo = new CLenovoComputer();

    IOperationSystem * linuxOS = new CLinuxOS();
    IOperationSystem * windowsOS = new CWinodwsOS();

    dell->InstallOS(linuxOS);
    lenovo->InstallOS(windowsOS);

    delete windowsOS;
    delete linuxOS;
    delete lenovo;
    delete dell;

    return 0;
}
