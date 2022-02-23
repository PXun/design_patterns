#include <iostream>
#include "../flyweight/CGomokuPiece.h"
#include "../flyweight/CGomokuPieceFactory.h"

int main(int, char**) 
{
    srand((unsigned int)time(NULL));

    CGomokuPieceFactory factory;

    for(int i = 0; i < 10; i++)
    {
        CGomokuPiece * black = factory.GetGomokuPiece("black");
        black->SetX(rand() % 100);
        black->SetY(rand() % 100);
        black->Draw();

        CGomokuPiece * white = factory.GetGomokuPiece("white");
        white->SetX(rand() % 100);
        white->SetY(rand() % 100);
        white->Draw();
    }

    std::cout << "Get piece object count: " << factory.GetGomokuPieceCount() << std::endl;

    return 0;
}
