#include <iostream>
#include "Truckloads.h"
using namespace std;

int Truckloads::numTrucks(int numCrates, int loadSize){
int counter = 0;
if(numCrates <= loadSize){
    return 1;
}
if(numCrates%2 == 0){
return numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2,loadSize);
}
else{
    return numTrucks((numCrates+1)/2,loadSize) + numTrucks((numCrates-1)/2,loadSize);
}
}