#pragma once
#include "CSubject.h"

class IObserver
{
public:
    IObserver(CSubject * pSubject): m_pSubject(pSubject){}

public:
    virtual void Update() = 0;

protected:
    CSubject * m_pSubject;
    std::string m_strObserverName;
};