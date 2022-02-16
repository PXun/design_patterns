#pragma once
#include "IHandler.h"

class CProjectManagerHandler : public IHandler
{
public:
    CProjectManagerHandler();
    ~CProjectManagerHandler();

public:
    virtual void Handler(int days);
    virtual IHandler * GetHandler();
    virtual void SetHandler(IHandler * handler);

private:
    IHandler * m_pHandler = nullptr;
};