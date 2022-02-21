#pragma once
#include "CRoleStateCaretaker.h"

class CGameRole
{
public:
    CGameRole(int nHealth, CRoleStateCaretaker * pCaretaker);
    ~CGameRole();

public:
    void Fight();
    void ShowState();
    void SaveState(const std::string & strCaretaker);
    void RecoverState(const std::string & strCaretaker);

private:
    int m_nHealth;
    CRoleStateCaretaker * m_pCaretaker;
};