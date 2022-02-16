#include <iostream>
#include "../proxy/CProxySubject.h"

int main(int, char**) 
{
    ISubject * p = new CProxySubject;

    p->Request();

    delete p;

    return 0;
}
