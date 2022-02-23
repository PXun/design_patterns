#pragma once
#include <iostream>
#include "ICountry.h"

class IMediator
{
public:
    virtual void declare(const std::string & msg, ICountry * country) = 0;
};