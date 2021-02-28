#ifndef _radio_
#define _radio_

#include "Media.h"


class Radio : public Media{

    private:
    double frequency = 90.0;
    
    public:
    Radio(int pId):Media(pId){}

    double GetFrequency(){
        return frequency;
    }

    void SetFrequency(int pfrequency){
        frequency = pfrequency;
    }

    void ChangeFrequency(int pfrequency){
        cout << "" << endl;
        cout << "Changed the frequency " << frequency << " to frequency " << pfrequency << endl;
        SetFrequency(pfrequency);
    }

};

#endif