#include <bits/stdc++.h>
using namespace std;

class Employee {
  public:
    int age;
    // Default constructor.
    Employee() {
        cout<<"Age initialized..."<<endl;
        age = 50;
    }
};

int main() {
  Employee e1;

  cout << e1.age;
  return 0;
}
