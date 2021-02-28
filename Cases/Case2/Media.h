#ifndef _media_
#define _media_

#include <iostream>
#include <map>

using namespace std;



//Media is a mother class to Television, Radio, Music 

class Media{

    private:

    int id;
    map<int,string> hashNames;
    bool State;

    // Print a signal of the media was started
    void Play(){
        cout << "" << endl;
        cout << "Is playing the media : " << hashNames[id] << endl;
        State = true;
    }

    // Print a signal of the media was stopped
    void Stop(){
        cout << "" << endl;
        cout << "The media : " << hashNames[id] << " was stopped" << endl;
        State = false;
    }

    public:

    //The constructor of Media

    Media(int pId){
        id = pId;
        State = false;
        hashNames[1] = "Television";
        hashNames[2] = "Radio";
        hashNames[3] = "Youtube";
        hashNames[4] = "Spotify";
    }


    //This function upgrade the state of the media, if the input id  is equals to media id 

    void Update(int pId){

    if(id == pId){
            if(State == false){
                Play();
            }
            else{
                Stop();
            }
        }
    }

};



#endif