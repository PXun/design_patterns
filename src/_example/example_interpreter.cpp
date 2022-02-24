#include <iostream>
#include "../interpreter/CContext.h"
#include "../interpreter/CTerminalExpression.h"
#include "../interpreter/CNonterminalExpression.h"

int main(int, char**) 
{
    CContext * ctx = new CContext();
    ctx->_playtext = "Expression......";

    IExpression * t = new CTerminalExpression();
    IExpression * n = new CNonterminalExpression();

    t->Interpret(ctx);
    n->Interpret(ctx);

    delete t;
    delete n;
    delete ctx;

    return 0;
}
