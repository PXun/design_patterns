#pragma once
#include "ISubject.h"

class CRealSubject : public ISubject
{
public:
    CRealSubject();
    ~CRealSubject();

public:
    virtual void Request();
};