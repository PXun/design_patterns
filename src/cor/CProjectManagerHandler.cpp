#include "CProjectManagerHandler.h"
#include <iostream>

CProjectManagerHandler::CProjectManagerHandler()
{
}

CProjectManagerHandler::~CProjectManagerHandler()
{
}

void CProjectManagerHandler::SetHandler(IHandler* handler)
{
    m_pHandler = handler;
}

IHandler* CProjectManagerHandler::GetHandler()
{
    return m_pHandler;
}

void CProjectManagerHandler::Handler(int days)
{
    if(days <= 3)
    {
        std::cout << "ProjectManager approve directly" << std::endl;
    }
    else
    {
        std::cout << "ProjectManager insufficient privileges" << std::endl;

        if(m_pHandler != nullptr)
        {
            m_pHandler->Handler(days);
        }
    }
}