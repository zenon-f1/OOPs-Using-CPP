#include <iostream>
using namespace std;

class Dog
{

public:
    string breed, color;

    void print_properties(Dog dog);
};
void Dog::print_properties(Dog dog)
{
    cout << "Bread : " << dog.breed << endl;
    cout << "Color : " << dog.color << endl;
}
int main()
{
    Dog dog;
    dog.breed = "Pug";
    dog.color = "Brown";
    dog.print_properties(dog); // here dog is an object
    return 0;
}