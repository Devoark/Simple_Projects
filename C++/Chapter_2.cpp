#include <iostream>
#include "Gen_Header.h"

using namespace std;

int list26()
{
    int innumb;

    cout << "Enter an integer: ";

    //cin store the integer
    cin >> innumb;

    cout << "Enter yout name: ";
    string inname;
    cin >> inname;

    cout << inname << " entered " << innumb << endl;

    return 0;
}



//g++ (filename.cpp) to compile
int main ()
{
    //cout << "Hello World" << endl;
    list26();
    return 0;
}