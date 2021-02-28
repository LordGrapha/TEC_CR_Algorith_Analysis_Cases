
#include "Television.h"
#include "Radio.h"
#include "Spotify.h"
#include "Youtube.h"

int main() {

    Television * television = new Television(1);
    Radio * radio = new Radio(2);
    Youtube * youtube = new Youtube(3);
    Spotify * spotify = new Spotify(4);
   
    return 0;
}