#include "CRoleStateCaretaker.h"

CRoleStateCaretaker::CRoleStateCaretaker()
{
}

CRoleStateCaretaker::~CRoleStateCaretaker()
{
    for(auto it = m_mRoleStateMemento.begin(); it != m_mRoleStateMemento.end(); ++it)
    {
        delete it->second;
        it->second = nullptr;
    }
    
    m_mRoleStateMemento.clear();
}

CRoleStateMemento * CRoleStateCaretaker::GetRoleStateMemento(const std::string & strCaretaker)
{
    auto it = m_mRoleStateMemento.find(strCaretaker);
    if(it != m_mRoleStateMemento.end())
    {
        return it->second;
    }

    return nullptr;
}

void CRoleStateCaretaker::SetRoleStateMemento(const std::string & strCaretaker, CRoleStateMemento * pRoleStateMemento)
{
    m_mRoleStateMemento[strCaretaker] = pRoleStateMemento;
}