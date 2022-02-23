#pragma once
#include "ICountry.h"
#include "IMediator.h"

class CUSA : public ICountry
{
public:
    CUSA(IMediator * mediator);
    ~CUSA();

public:
    virtual void declare(const std::string & msg);
    virtual void getmessage(const std::string & msg);

private:
    IMediator * _mediator;
};