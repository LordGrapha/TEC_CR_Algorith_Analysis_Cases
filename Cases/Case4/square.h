#ifndef _square_
#define _square_
#include <vector>
#include "line.h"

class Square{
    public:
        int size, noiseRange, amountPointsReference;
        double noisePercent;
        std::vector<Line*> lines;
        Square(){

        }

  
};

#endif