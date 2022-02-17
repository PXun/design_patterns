#pragma once

class CSubSystemA;
class CSubSystemB;
class CSubSystemC;

class CFacade
{
public:
    CFacade();
    ~CFacade();

public:
    void MethodA();
    void MethodB();

private:
    CSubSystemA * m_pSSA = nullptr;
    CSubSystemB * m_pSSB = nullptr;
    CSubSystemC * m_pSSC = nullptr;
};