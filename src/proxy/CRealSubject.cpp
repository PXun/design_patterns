#include "CRealSubject.h"
#include <iostream>

CRealSubject::CRealSubject()
{
}

CRealSubject::~CRealSubject()
{
}

void CRealSubject::Request()
{
    std::cout << "this is real request" << std::endl;
}