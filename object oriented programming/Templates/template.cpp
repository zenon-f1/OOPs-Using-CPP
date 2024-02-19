#include <iostream>
using namespace std;
// Template Function with a type T
// During instantiation, this T will be replaced by the type of argument.
template <class T>
T maxNum(T a, T b)
{
    return (a > b ? a : b);
}

template <typename S>
S sum(S a, S b)
{
    return a + b;
}
int main()
{
    int x = 34, y = 67;
    float a = 4.5, b = 1.9;
    cout << maxNum<int>(x, y) << endl;
    cout << maxNum<float>(a, b) << endl;
    cout << endl;

    cout << sum<int>(x, y) << endl;
    cout << sum<float>(a, b) << endl;

    string first_name = "Alex", second_name = "Carey";
    cout << sum<string>(first_name, second_name) << endl;
    return 0;
}