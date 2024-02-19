#include<bits/stdc++.h>
using namespace std;

class Dog {
  public:
    string breed;

    // Constructor
    Dog() {
      cout << "Constructor Called" << endl;
    }

    // Destructor
    ~Dog() {
      cout << "Destructor Called" << endl;
    }
};

int main() {
  Dog d; // Constructor and Destructor will be called automatically
  return 0;
}
