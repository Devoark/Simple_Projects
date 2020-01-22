#include <iostream>
#include "Gen_Header.h"

using namespace std;
/*
int list31()
{
    cout << "Enter the first number : ";
    int firstNum = 0;
    cin >> firstNum;

    cout << "Enter the second number : ";
    int secondNum = 0;
    cin >>secondNum;

    int mult_res = firstNum * secondNum;

    cout << firstNum << " x " << secondNum;
    cout << " = " << mult_res << endl;

    return 0;
}
*/
int firstNum;
int secondNum;
int thirdNum;

int mult_result;
//can't nest the void in list36(); cpp doesn't allow nested functions
void Mult_Num()
{
    //cin is used to store the user in put at the terminal at run time.
    cout << "Enter the first number : ";
    cin >> firstNum;

    cout << "Enter the second number : ";
    cin >> secondNum;

    cout << "Enter the third number : ";
    cin >> thirdNum;

    mult_result = firstNum * secondNum * thirdNum;
    
    cout << firstNum << " x " << secondNum << " x " << thirdNum;
    cout << " = " << mult_result;

    return;
}

int list36()
{
    Mult_Num();
    return 0;
}

int list37()
{
    //const is used to set a constant variable that for the program shouldn't change and remain constant.
    const double  pi = 22.0 / 7;
    cout << "The value of the constant pi is : " << pi << endl;
    return 0;
}

constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }

int list38()
{
    //#include <iostream> is def globaly for Chapter_3.cpp
    //The following lines are commented as they interfere with Exe3() or Exe4() naming the double pi in that exerise another name fixes the issue
    const double pi = 22.0 / 7;

    cout << "constant pi contains value " << pi << endl;
    cout << "constexpr GetPi() returns value " << GetPi() << endl;
    cout << "constexpr TwicePi() returns value " << TwicePi() << endl;

    return 0;

}

int list39()
{
    //using namespace std; (already defined globaly)
    //enums can exist inside integer functions
    //Enums first var set to a number will set it to given number folloing values will be given values in accending order
    //eg North = 25 , South = 26, East = 27, West = 28,.....
    enum CardinalDir
    {
        North = 25,
        South,
        East,
        West
    };

    cout << "Displaying directions and thier symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;

    //Under the enum the var windDir... is created and assigned the value of South making the printed number 26 same as South
    CardinalDir windDirection = South;
    cout << "Variable windDirection = " << windDirection << endl;

    return 0;
}

int extra()
{
    //define can be used to define a variable which is to be reserved and value is set as static
    #define pi 22.0 / 7
    //print out the variable pi as an int (Dispite not needing to declare it as one)
    cout << pi << endl;
    
    //unsigned ints only are positive and taking one away from zero causes it to wrap around to its highest possible value
    unsigned int toZero = 0;
    // can use the same variable to get new value with out declaring a new one.
    toZero = toZero - 1;
    cout << "toZero is ... " << toZero << endl;
    
    return 0;
}
/*
    1. What is the diff between a signed int and a unsigned int?
        a signed in can be both positive and negative while a unsigned int can only be positive and therefore must be used more carefully.

    2. Why should yoi not use #define to declare a constant?
        the #define command is a preprocessor macro and replaces the definition of variable without considering whether it has a type 
        and this can possibly create convertion error amoung others

    3. Why would you initalize a variable ?
        The variable is initialized to give it a value otherwise it could be just random memory addresses possibly posing as a security problem
        or just cause run time errors.

    4.  Conisder the enum below. What is the value of the Queen?
        
        enum YourCards {Ace, Jack, Queen, King}

        since the numbers arent given any value and assuming the value starts at 0 and counts up it would be 3

    5. What is wrong with is variable name?
        int Integer = 0;

        integer is a (likely) reserved word not to mention that is not very specific of the purpose of the value it holds.
*/

//Exersise 1 (Make Queen value 45.)
int Exe1()
{
    enum YourCards {Ace = 43, Jack, Queen, King};
    cout << "The value of the queen is ... " << Queen << endl;

    return 0;
}

//Exersise write a program that shows that that the size of int and unsigned int are the same but smaller than a long int.
int Exe2()
{   
    //use sizeof 
    cout << "The size of int is " << sizeof(int) << endl;
    cout << "The size of int is " << sizeof(unsigned int) << endl;
    cout << "The size of int is " << sizeof(long) << endl;
    return 0;
}

//write a program to calc the area and circumfrence of a circle where area is given by the user.
int Exe3()
{
    const double pi_ = 22.0 / 7;
    cout << "Enter a value for the radius of a circle: " << endl;
    double radius = 0;
    cin >> radius;

    double area = radius * pi_ ;
    double circumfrence = pi_ * radius * 2;

    cout << "The area of the circle is: " << area << endl;
    cout << "The circumfrence of the circle is: " << circumfrence << endl;

    return 0;
}

/*  Exe4 
 *  If the numbers in Exe3() were integers, how would the answer change?
 * 
 *      The numbers precision would be lost and they would be rounded up or down depending on their value which would make 
 *      the answer less accurate
 * 
 * Exe5
 *  What is wrong with the following initialization> 
 *    auto Integer;
 * 
 *  "auto" is used to automaticaly let the compiler decide which type of variable would be best suited for the data type
 *  the main issue is how ever is that Integer is likely a reserved word meaning the compiler will spit out an error about
 *  redefining or duplicate delaration of integers.
 * 
 */
int main()
{
    //list31();
    //list33();
    //list36();
    //list37();
    //list38();
    //list39();
    //extra();
    //Exe1();
    //Exe2();
    Exe3();

    return 0;
}

