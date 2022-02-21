#include "CPersonDirector.h"

CPersonDirector::CPersonDirector()
{
}

CPersonDirector::~CPersonDirector()
{
}

void CPersonDirector::CreatePerson(IPersonBuilder * person)
{
    person->BuildHead();
    person->BuildBody();
    person->BuildLeftArm();
    person->BuildRightArm();
    person->BuildLeftLeg();
    person->BuildRightLeg();
}