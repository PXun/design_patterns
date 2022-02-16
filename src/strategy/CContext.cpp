#include "CContext.h"
#include "CAddition.h"
#include "CSubtraction.h"

CContext::CContext(const std::string & strAlgorithm)
{
    if("+" == strAlgorithm)
    {
        m_pAlgorithm = new CAddition;
    }
    else if("-" == strAlgorithm)
    {
        m_pAlgorithm = new CSubtraction;
    }
}

CContext::~CContext()
{
    if(nullptr != m_pAlgorithm)
    {
        delete m_pAlgorithm;
    }
}

int CContext::GetResult(int m, int n)
{
    return m_pAlgorithm->GetResult(m, n);
}