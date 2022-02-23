#include "CIraq.h"

CIraq::CIraq(IMediator * mediator)
: _mediator(mediator)
{
}

CIraq::~CIraq()
{
}

void CIraq::declare(const std::string & msg)
{
    std::cout << "Iraq declare: " << msg << std::endl;
    _mediator->declare(msg, this);
}

void CIraq::getmessage(const std::string & msg)
{
    std::cout << "Iraq get message: " << msg << std::endl;
}