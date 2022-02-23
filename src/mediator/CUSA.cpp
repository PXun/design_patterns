#include "CUSA.h"

CUSA::CUSA(IMediator * mediator)
: _mediator(mediator)
{
}

CUSA::~CUSA()
{
}

void CUSA::declare(const std::string & msg)
{
    std::cout << "USA declare: " << msg << std::endl;
    _mediator->declare(msg, this);
}

void CUSA::getmessage(const std::string & msg)
{
    std::cout << "USA get message: " << msg << std::endl;
}