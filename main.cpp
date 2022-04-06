#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
using namespace std;

int main()
{
Reverse abc;
Truckloads xyz;
abc.reverseDigit(1045);
cout<<endl;
abc.reverseString("HELLO");
cout<<endl;
cout<<xyz.numTrucks(200,5)<<endl;
}