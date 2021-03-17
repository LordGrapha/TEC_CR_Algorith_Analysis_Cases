#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
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

void exportCsvMatrix(){

    std::vector<std::vector<Point *> *> *testMatrix = getConcentrixSquares(100, 100);
    std::cout << "Matrix done, writing csv..." << std::endl;
    std::ofstream outdata;          // outdata is like cin
    int i;                          // loop index
    outdata.open("D:/concentrixSquare.csv");   // opens the file
    if( !outdata ) {                // file couldn't be opened
        std::cerr << "Error: file could not be opened" << std::endl;
        exit(1);
    }

    for (int square = 0; square < testMatrix->size(); square++)
    {
        for (int point = 0; point < testMatrix->at(square)->size(); point++)
        {
            outdata << testMatrix->at(square)->at(point)->x << ";" << testMatrix->at(square)->at(point)->y << ";";
        }
        outdata << ",";
    }
    std::cout << "Csv done!" << std::endl;
    outdata.close();
}

int main(){
    exportCsvMatrix();
    /*std::vector<std::vector<Point*>*>* testMatrix = getConcentrixSquares(100, 100);
    std::cout << "Concentrix Squares without deformation:" << std::endl;
    for(int square = 0; square < testMatrix->size(); square++){
        std::cout << "\nSquare " << (square + 1) << ":" << std::endl;
        for(int point = 0; point < testMatrix->at(square)->size(); point++){
            std::cout << "(" << testMatrix->at(square)->at(point)->x << "," <<
                         testMatrix->at(square)->at(point)->y << ")\t";
        }
        std::cout << std::endl;
    }*/
    return 0;
}