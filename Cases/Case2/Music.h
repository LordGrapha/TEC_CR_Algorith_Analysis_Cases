#ifndef _music_
#define _music_

#include "Media.h"


class Music : public Media{

    private:
    string Song = "Pepe";
    
    public:
    Music(int pId):Media(pId){}

    string GetSong(){
        return Song;
    }

    void SetSong(int pSong){
        Song = pSong;
    }

    void ChangeSong(int pSong){
        cout << "" << endl;
        cout << "Changed the song " << Song << " to song " << pSong<< endl;
        SetSong(pSong);
    }

};

#endif