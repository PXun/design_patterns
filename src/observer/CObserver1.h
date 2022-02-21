#pragma once
#include "IObserver.h"

class CObserver1 : public IObserver
{
public:
    CObserver1(CSubject * pSubject);
    ~CObserver1();

public:
    virtual void Update();
};