#include <iostream>
using namespace std;

/*
Function Name: factorial
Description: This function takes an integer as input and returns the factorial
Parameters:
    - int a: first number
Returns:
    - int fact: factorial
*/
int factorial(int a)
{
    unsigned long long int fact = 1;
    int num = a;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int a = 34; // This is a single line comment
    /*This
    is a
    multiline comment */
    cout << "Value of a " << a << endl;
    cout<<factorial(a);

    return 0;
}