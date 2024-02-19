#include <iostream>

using namespace std;

class Employee {
  public:
    int age;
    string name;
    // Parameterized constructor
    Employee(string name,int x) { 
        this->name = name;
        age = x; 
    }
};

int main() {
  Employee c1("Rohan",40); 
  Employee c2("Kavya",21);
  Employee c3("Ashok",50);
  cout << c1.name <<" "<< c1.age << "\n";
  cout <<c2.name <<" "<< c2.age << "\n";
  cout <<c3.name <<" "<< c3.age << "\n";
  return 0;
}
