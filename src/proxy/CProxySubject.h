#pragma once
#include "ISubject.h"

class CProxySubject : public ISubject
{
public:
    CProxySubject();
    ~CProxySubject();

public:
    virtual void Request();

private:
    ISubject * m_pSubject = nullptr;
};