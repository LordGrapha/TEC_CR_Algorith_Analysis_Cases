#ifndef _television_
#define _television_

#include "Media.h"


class Television : public Media{

    private:
    int Channel = 1;
    
    public:
    Television(int pId):Media(pId){}

    int GetChannel(){
        return Channel;
    }

    void SetChannel(int pChannel){
        Channel = pChannel;
    }

    void ChangeChannel(int pChannel){
        cout << "" << endl;
        cout << "Changed the channel " << Channel << " to channel " << pChannel << endl;
        SetChannel(pChannel);

    }

};

#endif