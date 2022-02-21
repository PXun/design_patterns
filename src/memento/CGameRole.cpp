#include "CGameRole.h"
#include "CRoleStateMemento.h"
#include <iostream>

CGameRole::CGameRole(int nHealth, CRoleStateCaretaker * pCaretaker)
: m_nHealth(nHealth)
, m_pCaretaker(pCaretaker)
{
}

CGameRole::~CGameRole()
{
}

void CGameRole::Fight()
{
    m_nHealth -= 17;
}

void CGameRole::ShowState()
{
    std::cout << "HP:  " << m_nHealth << std::endl;
}

void CGameRole::SaveState(const std::string & strCaretaker)
{
    CRoleStateMemento * p = new CRoleStateMemento(m_nHealth);
    m_pCaretaker->SetRoleStateMemento(strCaretaker, p);
}

void CGameRole::RecoverState(const std::string & strCaretaker)
{
    auto p = m_pCaretaker->GetRoleStateMemento(strCaretaker);
    m_nHealth = p->m_nHealth;
}