#include "CSubject.h"
#include "IObserver.h"

CSubject::CSubject()
{
}

CSubject::~CSubject()
{
}

void CSubject::Attach(IObserver * pObserver)
{
    m_listObserver.push_back(pObserver);
}

void CSubject::Detach(IObserver * pObserver)
{
    m_listObserver.remove(pObserver);
}

std::string CSubject::GetState()
{
    return m_strState;
}

void CSubject::SetState(const std::string & strState)
{
    m_strState = strState;
    std::cout << "Subject: " << m_strState << std::endl;
    Notify();
}

void CSubject::Notify()
{
    std::list<IObserver *>::iterator it = m_listObserver.begin();
    while (it != m_listObserver.end())
    {
        (*it)->Update();
        ++it;
    }
}