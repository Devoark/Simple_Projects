#include <iostream>
#include <vector>
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
    //declare an array
    int myNum [5] = {35, 56, -21, 5002, 365};

    //print the numbers in said array
    cout << "First element at index 0: " << myNum [0] << endl;
    cout << "Second element at index 1: " << myNum [1] << endl;
    cout << "Third element at index 2: " << myNum [2] << endl;
    cout << "Fourth element at index 3: " << myNum[3] << endl;
    cout << "Fifth element at index 4: " << myNum [4] << endl;

    return 0;
}

//for list 42
constexpr int Square(int number) {return number*number; }

int list42()
{   
    //constant int for array (as it should be a constant according to author)
    const int ARRAY_LENGTH = 5;

    //declare the int values for the array
    int myNumb [ARRAY_LENGTH] = {5, 10, 0, -101, 20};


    int moreNumb [Square(ARRAY_LENGTH )];

    //ask user to input at which slot while the data be changed 
    cout << "Enter index of the element to be changed: ";
    int elementIndex = 0;
    cin >> elementIndex;


    //user inputs the value to be inserted in the array 
    cout << "Enter a value: ";
    int newValue = 0;
    cin >> newValue;

    //inject user input into the array
    myNumb[elementIndex] = newValue;
    moreNumb[elementIndex] = newValue;
    
    //print the value array at the changed value
    cout << "Element " << elementIndex << " in an array myNumb is: ";
    cout << myNumb[elementIndex] << endl;

    cout << "Element " << elementIndex << " in array moreNumb is: ";
    cout << moreNumb[elementIndex] << endl;
    
    return 0;
}

int list43()
{
    //the first value is the rows and the second is the colums
    // and load the array with values
    int threeRowsThreeColums [3] [3] = \
    {{-501, 205, 2016}, {989, 101, 206}, {303, 456, 596}};
    
    //print the values of the array in the order 0 - 1 - 2
    cout << "Row 0: " << threeRowsThreeColums [0] [0] << " " \
                    << threeRowsThreeColums [0] [1] << " " \
                    << threeRowsThreeColums [0] [2] << endl;

    cout << "Row 1: " << threeRowsThreeColums [1] [0] << " " \
                    << threeRowsThreeColums [1] [1] << " " \
                    << threeRowsThreeColums [1] [2] << endl;

    cout << "Row 2: " << threeRowsThreeColums [2] [0] << " " \
                    << threeRowsThreeColums [2] [1] << " " \
                    << threeRowsThreeColums [2] [2] << endl;

    return 0;
}

int list44()
{
    //#include <vector> is needed for the vector<int>
    vector<int> dynArray(3); 

    //declare values in that dynamic array
    dynArray [0] = 365;
    dynArray [1] = -421;
    dynArray [2] = 789;

    //print values before modification 
    cout << "Number of integers in array : " << dynArray.size() << endl;

    //enter a new value into the array
    cout << "Enter another element in array: " << endl;
    int newVal = 0;
    cin >> newVal;
    //push new value to the back off the dyn array?
    dynArray.push_back(newVal);

    //print new amount of integers in array and most recent value
    cout << "Number of integers in array: " <<  dynArray.size() << endl;
    cout << "Last element in array: ";
    cout << dynArray[dynArray.size() - 1] << endl;

    return 0;
}

int main()
{
    //list41();
    //list42();
    //list43();
    list44();
    return 0;
}