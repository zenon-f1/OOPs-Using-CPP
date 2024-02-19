using namespace std;
int multiplyTwoNumbers(int x, int y)
{
    return x * y;
}
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
