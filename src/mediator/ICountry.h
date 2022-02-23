#pragma once
#include <iostream>

class ICountry
{
public:
    virtual void declare(const std::string & msg) = 0;
    virtual void getmessage(const std::string & msg) = 0;
};