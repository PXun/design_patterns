#pragma once
#include "IHandler.h"

class CGroupLeaderHandler : public IHandler
{
public:
    CGroupLeaderHandler();
    ~CGroupLeaderHandler();

public:
    virtual void Handler(int days);
    virtual IHandler * GetHandler();
    virtual void SetHandler(IHandler * handler);

private:
    IHandler * m_pHandler = nullptr;
};