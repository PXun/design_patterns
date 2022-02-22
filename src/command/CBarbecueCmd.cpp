#include "CBarbecueCmd.h"

CBarbecueCmd::CBarbecueCmd(CChef * chef)
: _chef(chef)
{
}

CBarbecueCmd::~CBarbecueCmd()
{
}

void CBarbecueCmd::ExecuteCmd()
{
    _chef->Barbecue();
}