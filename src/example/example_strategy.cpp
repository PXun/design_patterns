#include <iostream>
#include "../strategy/CContext.h"

int main(int, char**) 
{
    int m = 3, n = 2;
    CContext ctx_add("+");
    std::cout << m << " + " << n << " = " << ctx_add.GetResult(m, n) << std::endl;

    CContext ctx_sub("-");
    std::cout << m << " - " << n << " = " << ctx_sub.GetResult(m, n) << std::endl;

    return 0;
}
