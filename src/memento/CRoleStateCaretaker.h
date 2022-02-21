#pragma once
#include <map>
#include "CRoleStateMemento.h"

class CRoleStateCaretaker
{
public:
    CRoleStateCaretaker();
    ~CRoleStateCaretaker();

public:
    CRoleStateMemento * GetRoleStateMemento(const std::string & strCaretaker);
    void SetRoleStateMemento(const std::string & strCaretaker, CRoleStateMemento * pMemento);

private:
    std::map<std::string, CRoleStateMemento *> m_mRoleStateMemento;
};