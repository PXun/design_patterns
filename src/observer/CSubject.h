#pragma once
#include <iostream>
#include <string>
#include <list>

class IObserver;

class CSubject
{
public:
    CSubject();
    ~CSubject();

public:
    virtual void Attach(IObserver * pObserver);
    virtual void Detach(IObserver * pObserver);

    virtual std::string GetState();
    virtual void SetState(const std::string & strState);
    
    virtual void Notify();

private:
    std::string m_strState;
    std::list<IObserver *> m_listObserver;
};