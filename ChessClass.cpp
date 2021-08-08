//
//  ChessClass.cpp
//  MIT
//
//  Created by sahruday  reddy patti on 05/05/21.
//
#include <iostream>
#include <cmath>
#include <string>

enum Piece { KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN, EMPTY };
enum Color { WHITE, BLACK, NONE };

class Square
{
    Piece piece;
    Color color;
    
public:
    
    Square();
    
    Piece getPiece();
    
    Color getColor();
    
    void setPieceandColor(Piece,Color);
    
};

Square::Square()
{
    piece = EMPTY;
    color = NONE;
    
}

Piece Square :: getPiece()
{
    return piece;
}

Color Square :: getColor()
{
    return color;
}

void Square :: setPieceandColor(Piece p,Color c)
{
    piece = p;
    color = c;
}










class Board
{
    Square square[8][8];
    
    
    
    
};

