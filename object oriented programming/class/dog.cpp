#include <iostream>
using namespace std;

class Dog
{
private:
    int age;

public:
    void get_age(int age) //inside class definition
    {
        this->age = age;
    }
    void sound();
};
void Dog::sound() // outside class definition
{
    cout << "Woof Woof!" << endl;
    cout<<"Age: "<<age<<endl;
}
int main()
{
    Dog buddy;
    buddy.get_age(3);
    buddy.sound();
    return 0;
}