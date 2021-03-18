#ifndef _matrix_
#define _matrix_
#include <vector>
#include "square.h"
#include <random>
#include "point.h"
using namespace std;
const int PIXELS=10;
class Matrix{
    private:
        void createSquare(int pSize, double pPercentageNoise, Point* pOriginPoint){
            Square* square=new Square(pSize, pPercentageNoise, pOriginPoint->clonePoint());
            squares->push_back(square);
        }
    public:
        int amountSquares, width, height;
        std::vector<Square*>* squares;

        Matrix(int pHeight, int pWidth){
            this->squares=new std::vector<Square*>();
            this->width=pWidth;
            this->height=pHeight;
            this->amountSquares=(pHeight <= pWidth ? pHeight : pWidth)/(PIXELS*2);
            double percentageNoise=0;
            Point* initialPoint=new Point(0,0);
            for(int index=amountSquares; index>=1; index--){
                createSquare(index*PIXELS*2, percentageNoise, initialPoint);
                initialPoint->addDistance(PIXELS);
                percentageNoise+=(100/amountSquares);
            }
            for(int i=0; i<squares->size(); i++){
                cout<<"Cuadrado numero : "<<i<<endl;
                squares->at(i)->toString();
            }
        }

};

#endif