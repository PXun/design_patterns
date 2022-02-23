#include "CConcreteMediator.h"
#include "CUSA.h"

CConcreteMediator::CConcreteMediator()
{
}

CConcreteMediator::~CConcreteMediator()
{
}

void CConcreteMediator::SetUSA(CUSA * country)
{
    _USA = country;
}

void CConcreteMediator::SetIraq(CIraq * country)
{
    _Iraq = country;
}

void CConcreteMediator::declare(const std::string & msg, ICountry * country)
{
    if(_USA == country)
    {
        _Iraq->getmessage(msg);
    }
    else if(_Iraq == country)
    {
        _USA->getmessage(msg);
    }
}