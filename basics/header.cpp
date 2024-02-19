#include <iostream>
#include "multiplyTwoNumbers.h" // user defined header file
using namespace std;
/*
There are two types of headers files
1. Pre-existing header files --> #iostream<iostream>
2. User-defining files --> #include "name.h"
*/

int main()
{
    int a = 45;
    int b = 4;
    cout << "Multiplication is " << multiplyTwoNumbers(a, b) << endl;
    cout << "Factorial of 6 is " << factorial(6) << endl;
    return 0;
}