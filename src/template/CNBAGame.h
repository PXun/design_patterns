#pragma once
#include "IGame.h"

class CNBAGame : public IGame
{
public:
    CNBAGame();
    ~CNBAGame();

public:
    virtual void Initialize();
    virtual void StartPlay();
    virtual void StopPlay();
};