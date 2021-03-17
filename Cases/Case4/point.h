#ifndef point
#define point

class Point{
public:
    Point(){
        this->x = 0;
        this->y = 0;
    }

    Point(int pX, int pY){
        this->x = pX;
        this->y = pY;
    }

    int x;
    int y;
};

#endif