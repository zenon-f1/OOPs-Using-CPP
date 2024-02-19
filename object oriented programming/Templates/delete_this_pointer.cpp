#include <iostream>
using namespace std;

class Foo
{
private:
    int member;

public:
    Foo(int member)
    {
        // constructor
        this->member = member;
    }
    void bar()
    {
        cout << "member = " << this->member << endl;
    }
    void displayText()
    {
        cout << "Not accessing any member variable" << endl;
    }
    void destroy()
    {
        delete this;
    }
};
int main()
{
    Foo *ptr = new Foo(5);
    ptr->bar();
    ptr->destroy();
    ptr->displayText();
    // ptr->bar(); // garbage value
    return 0;
}