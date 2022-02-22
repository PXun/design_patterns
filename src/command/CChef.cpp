#include "CChef.h"

CChef::CChef(const std::string & name)
: _name(name)
{
}

CChef::~CChef()
{
}

void CChef::Cooking()
{
    std::cout << _name << " cooking..." << std::endl;
}

void CChef::Barbecue()
{
    std::cout << _name << " barbecue..." << std::endl;
}