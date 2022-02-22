#include "CCookingCmd.h"

CCookingCmd::CCookingCmd(CChef * chef)
: _chef(chef)
{
}

CCookingCmd::~CCookingCmd()
{
}

void CCookingCmd::ExecuteCmd()
{
    _chef->Cooking();
}