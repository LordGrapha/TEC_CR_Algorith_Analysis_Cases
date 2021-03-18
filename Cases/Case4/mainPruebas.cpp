#include <iostream>
#include "matrix.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void exportCsvMatrix(){
    Matrix* testMatrix = new Matrix(100, 100);
    std::cout << "Matrix done, writing csv..." << std::endl;
    std::ofstream outdata;          // outdata is like cin
    int i;                          // loop index
    outdata.open("D:/concentrixSquare.csv");   // opens the file
    if( !outdata ) {                // file couldn't be opened
        std::cerr << "Error: file could not be opened" << std::endl;
        exit(1);
    }

    for (int square = 0; square < testMatrix->amountSquares; square++)
    {
        for (int line = 0; line < testMatrix->squares->at(square)->lines->size(); line++)
        {
            outdata << testMatrix->squares->at(square)->lines->at(line)->initialPoint->toString();
            for(int point = 0;point < testMatrix->squares->at(square)->lines->at(line)->referenceListPoints->size(); point++){
                outdata << testMatrix->squares->at(square)->lines->at(line)->referenceListPoints->at(point)->toString();
            }
            outdata << testMatrix->squares->at(square)->lines->at(line)->finalPoint->toString();
        }
        outdata << ",";
    }
    std::cout << "Csv done!" << std::endl;
    outdata.close();
}

int main(){
    exportCsvMatrix();
}