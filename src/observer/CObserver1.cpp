#include "CObserver1.h"

CObserver1::CObserver1(CSubject * pSubject)
: IObserver(pSubject)
{
}

CObserver1::~CObserver1()
{
}

void CObserver1::Update()
{
    std::cout << "Observer1: " << m_pSubject->GetState() << std::endl;
}