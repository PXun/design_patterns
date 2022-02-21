#include "CObserver2.h"

CObserver2::CObserver2(CSubject * pSubject)
: IObserver(pSubject)
{
}

CObserver2::~CObserver2()
{
}

void CObserver2::Update()
{
    std::cout << "Observer2: " << m_pSubject->GetState() << std::endl;
}