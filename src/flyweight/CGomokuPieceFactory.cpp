#include "CGomokuPieceFactory.h"

CGomokuPieceFactory::CGomokuPieceFactory()
{
}

CGomokuPieceFactory::~CGomokuPieceFactory()
{
    for(auto it : _gomokuPieceMap)
    {
        delete it.second;
        it.second = nullptr;
    }

    _gomokuPieceMap.clear();
}

CGomokuPiece * CGomokuPieceFactory::GetGomokuPiece(const std::string & color)
{
    auto it = _gomokuPieceMap.find(color);
    if(it == _gomokuPieceMap.end())
    {
        _gomokuPieceMap.insert(std::make_pair(color, new CGomokuPiece(color)));
    }

    return _gomokuPieceMap[color];
}

int CGomokuPieceFactory::GetGomokuPieceCount()
{
    return _gomokuPieceMap.size();
}