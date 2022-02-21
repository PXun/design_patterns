#pragma once
#include "IObserver.h"

class CObserver2 : public IObserver
{
public:
    CObserver2(CSubject * pSubject);
    ~CObserver2();

public:
    virtual void Update();
};