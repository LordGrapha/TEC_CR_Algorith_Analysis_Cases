#ifndef _line_
#define _line_

#include "point.h"
#include <vector>
#include <iostream>

class Line{
    public:
        int large;
        bool orientation, haveNoise;
        Point* initialPoint, finalPoint;
        std::vector<Point*>* referenceListPoints;

        Line(int pLarge){
            
        }

  
};

#endif
