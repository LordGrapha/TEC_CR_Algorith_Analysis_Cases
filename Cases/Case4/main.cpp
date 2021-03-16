#include <iostream>
#include <vector>
#include "point.h"

//constants
const int PIXELS = 10;

std::vector<Point*>* getNewSquare(int pXoffset, int pYoffset, int pSide){
    std::vector<Point*>* square = new std::vector<Point*>();
    square->push_back(new Point(pXoffset, pYoffset));
    square->push_back(new Point(pXoffset, pYoffset + pSide));
    square->push_back(new Point(pXoffset + pSide, pYoffset));
    square->push_back(new Point(pXoffset + pSide, pYoffset + pSide));
    return square;
}

int getSquareSide(int pHeight, int pWidth){
    return pHeight <= pWidth ? pHeight : pWidth;        //If true then pHeight, else, pWidth
}

int getNSquares(int pSize){
    return pSize / PIXELS;
}

std::vector<std::vector<Point*>*>* getConcentrixSquares(int pHeight, int pWidth){
    std::vector<std::vector<Point*>*>* matrix =
        new std::vector<std::vector<Point*>*>();
    int side = getSquareSide(pHeight, pWidth);
    int squares = getNSquares(side);
    int xOffset = 0;
    int yOffset = 0;
    for(int index = 0; index < squares; index++){
        matrix->push_back(getNewSquare(xOffset, yOffset, side));
        xOffset += PIXELS;
        yOffset += PIXELS;
        side -= PIXELS * 2;
    }
    return matrix;
}

int main(){
    std::vector<std::vector<Point*>*>* testMatrix = getConcentrixSquares(100, 100);
    std::cout << "Concentrix Squares without deformation:" << std::endl;
    for(int square = 0; square < testMatrix->size(); square++){
        std::cout << "\nSquare " << (square + 1) << ":" << std::endl;
        for(int point = 0; point < testMatrix->at(square)->size(); point++){
            std::cout << "(" << testMatrix->at(square)->at(point)->x << "," <<
                         testMatrix->at(square)->at(point)->y << ")\t";
        }
        std::cout << std::endl;
    }
    return 0;
}
/*
#testing
testMatrix = getConcentrixSquares(100, 100)

#matplotlib test
print("Matplotlib test")

w = 6
h = 6

plt.figure(figsize=(w, h))
#Draw squares

for square in testMatrix:
    plt.plot(square[0], square[1])
    plt.plot(square[1], square[3])
    plt.plot(square[3], square[2])
    plt.plot(square[2], square[0])
        

#save a file
plt.savefig("out.png")
print("Done!\n\n")
*/
