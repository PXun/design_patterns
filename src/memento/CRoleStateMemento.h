#pragma once

class CRoleStateMemento
{
public:
    CRoleStateMemento(int nHealth);
    ~CRoleStateMemento();

public:
    int m_nHealth;
};