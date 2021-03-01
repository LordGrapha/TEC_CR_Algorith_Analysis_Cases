#include "Television.h"
#include "Radio.h"
#include "Spotify.h"
#include "Youtube.h"
#include "Application.h"

int main() {

    Television * television = new Television(1);
    Radio * radio = new Radio(2);
    Youtube * youtube = new Youtube(3);
    Spotify * spotify = new Spotify(4);
    std::list<IObserver *> observers;
    observers.push_back(television);
    observers.push_back(radio);
    observers.push_back(youtube);
    observers.push_back(spotify);
    Application* app = new Application(observers);
    app->select(spotify);
    app->select(television);
    app->select(radio);
    app->select(youtube);
    app->select(spotify);
    return 0;
}