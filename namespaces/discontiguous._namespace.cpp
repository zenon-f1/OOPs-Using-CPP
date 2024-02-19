#include <iostream>
using namespace std;
// 1st part of the namespace
namespace ns
{
    int var = 34;
}
// 2nd part of the namespace
namespace ns
{
    void func()
    {
        cout << "The value of var is " << var << endl;
    }
}
int main()
{
    ns::func();
    return 0;
}