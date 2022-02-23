#pragma once
#include "IMediator.h"
#include "CUSA.h"
#include "CIraq.h"

class CConcreteMediator : public IMediator
{
public:
    CConcreteMediator();
    ~CConcreteMediator();

public:
    void SetUSA(CUSA * country);
    void SetIraq(CIraq * country);
    virtual void declare(const std::string & msg, ICountry * country);

private:
    CUSA * _USA;
    CIraq * _Iraq;
};