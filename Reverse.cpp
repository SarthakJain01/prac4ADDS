#include <iostream>
#include <string>
#include "Reverse.h"

using namespace std;

int Reverse::reverseDigit(int value){

int rem = 0;

rem = (rem*10) + (value%10);
cout<<rem;
if (value/10 <= 0)
{
    return rem;
}
return reverseDigit(value/10);
}

string Reverse::reverseString(string value){
    string val = "";
if (value.size() <= 1){
    return value;
}
    return value.substr(value.size() - 1,1) + reverseString(value.substr(0, value.size() - 1));

}