#ifndef _matrix_
#define _matrix_
#include <vector>
#include "square.h"

class Matrix{
    public:
        int amountSquares, width, height;
        std::vector<Square*>* squares;

        Matrix(int pHeight, int pWidth){
            this->width=pWidth;
            this->height=pHeight;
            this->amountSquares=(pHeight <= pWidth ? pHeight : pWidth)/10;
        }

  
};

#endif