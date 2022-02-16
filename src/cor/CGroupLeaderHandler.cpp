#include "CGroupLeaderHandler.h"
#include <iostream>

CGroupLeaderHandler::CGroupLeaderHandler()
{
}

CGroupLeaderHandler::~CGroupLeaderHandler()
{
}

void CGroupLeaderHandler::SetHandler(IHandler* handler)
{
    m_pHandler = handler;
}

IHandler* CGroupLeaderHandler::GetHandler()
{
    return m_pHandler;
}

void CGroupLeaderHandler::Handler(int days)
{
    if(days <= 1)
    {
        std::cout << "GroupLeader approve directly" << std::endl;
    }
    else
    {
        std::cout << "GroupLeader insufficient privileges" << std::endl;

        if(m_pHandler != nullptr)
        {
            m_pHandler->Handler(days);
        }
    }
}