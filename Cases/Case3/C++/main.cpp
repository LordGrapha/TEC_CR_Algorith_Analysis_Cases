#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {
    array<int, 200000> testArray;
    srand(time(NULL));
    
    //Fills testArray with random numbers between 0 and 999999
    for (int index=0; index<testArray.size(); index++){
        testArray[index]=rand()%1000000;
    }
    //SearchedNum is assigned the last value in the array to create the worst case
    int searchedNum=testArray[testArray.size()-1];
    bool foundFlag=false;
    //Timer start
    clock_t start = clock();

    //Sequential search for searchedNum
    for (int index=0; index<testArray.size(); index++){
        if (searchedNum==testArray[index]){
            foundFlag=true;
        }
    }

    clock_t end = clock();
    cout << foundFlag << endl;
    double secs=double(end - start)/CLOCKS_PER_SEC;
    cout << secs*1000 << endl;
}