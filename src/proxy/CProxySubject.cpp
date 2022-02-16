#include "CProxySubject.h"
#include "CRealSubject.h"
#include <iostream>

CProxySubject::CProxySubject()
{
    m_pSubject = new CRealSubject;
}

CProxySubject::~CProxySubject()
{
    if(nullptr != m_pSubject)
    {
        delete m_pSubject;
    }
}

void CProxySubject::Request()
{
    std::cout << "Before real request, proxy do something.." << std::endl;

    if(nullptr != m_pSubject)
    {
        m_pSubject->Request();
    }

    std::cout << "After real request, proxy do something.." << std::endl;
}