#include <iostream>
#include "Gen_Header.h"

using namespace std;

int sample_array()
{
    //to init an array with 5 spaces all at 0 is the following
    //int myNum [5] = {0};

    //then could increase at a later date
    //int myNum_1 [500000]  = {0};

    //charaters can be supported as well
    //just as in java arrays start counting at 0 as 0,1,2,3.... 
    //char myChar [5];
    return 0;
}

int list41()
{
    int myNum [5] = {35, 56, -21, 5002, 365};

    cout << "First element at index 0: " << myNum [0] << endl;
    cout << "Second element at index 1: " << myNum [1] << endl;
    cout << "Third element at index 2: " << myNum [2] << endl;
    cout << "Fourth element at index 3: " << myNum[3] << endl;
    cout << "Fifth element at index 4: " << myNum [4] << endl;

    return 0;
}

int main()
{
    list41();
    return 0;
}