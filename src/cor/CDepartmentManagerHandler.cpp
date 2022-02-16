#include "CDepartmentManagerHandler.h"
#include <iostream>

CDepartmentManagerHandler::CDepartmentManagerHandler()
{
}

CDepartmentManagerHandler::~CDepartmentManagerHandler()
{
}

void CDepartmentManagerHandler::SetHandler(IHandler* handler)
{
    m_pHandler = handler;
}

IHandler* CDepartmentManagerHandler::GetHandler()
{
    return m_pHandler;
}

void CDepartmentManagerHandler::Handler(int days)
{
    std::cout << "DepartmentManager approve directly" << std::endl;
}