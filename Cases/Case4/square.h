#ifndef _square_
#define _square_
#include <vector>
#include "line.h"
#include "point.h"

using namespace std;

class Square{
    private:
    void createLines(){
        lines->push_back(new Line(size, true, (this->OriginPoint->x), (this->OriginPoint->y)));
        lines->push_back(new Line(size, true, (this->OriginPoint->x), (this->OriginPoint->y)+this->size));
        lines->push_back(new Line(size, false, (this->OriginPoint->x), (this->OriginPoint->y)));
        lines->push_back(new Line(size, false, (this->OriginPoint->x)+this->size, (this->OriginPoint->y)));
        if(noisePercentage!=0){
            for(int index=0; index<4; index++){
                if(getRandom(0,100)<65){
                    lines->at(index)->setNoise(this->noisePercentage);
                }
            }
        }
    }

    public:
        Point* OriginPoint;
        int size;
        double noisePercentage;
        std::vector<Line*>* lines;
        Square(int pSize, double pNoisePercentage, Point* pOriginPoint){
            this->lines=new std::vector<Line*>();
            this->size=pSize;
            this->noisePercentage=pNoisePercentage;
            this->OriginPoint=pOriginPoint;
            createLines();
        }

        void toString(){
            for(int i=0; i<lines->size(); i++){
                lines->at(i)->toString();
            }
        }
};

#endif