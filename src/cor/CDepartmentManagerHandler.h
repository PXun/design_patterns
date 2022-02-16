#pragma once
#include "IHandler.h"

class CDepartmentManagerHandler : public IHandler
{
public:
    CDepartmentManagerHandler();
    ~CDepartmentManagerHandler();

public:
    virtual void Handler(int days);
    virtual IHandler * GetHandler();
    virtual void SetHandler(IHandler * handler);

private:
    IHandler * m_pHandler = nullptr;
};