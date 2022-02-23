#pragma once
#include "ICountry.h"
#include "IMediator.h"

class CIraq : public ICountry
{
public:
    CIraq(IMediator * mediator);
    ~CIraq();

public:
    virtual void declare(const std::string & msg);
    virtual void getmessage(const std::string & msg);

private:
    IMediator * _mediator;
};