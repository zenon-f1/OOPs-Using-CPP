#include<bits/stdc++.h>
using namespace std;

class Square {
    
  public:
  int side;
  
  Square(int _side) {
    side = _side;
  }

  int area() {
    return side * side;
  }

  bool operator > (Square s) {
    if (area() > s.area())
      return true;
    return false;
  }

  bool operator < (Square s) {
    if (area() < s.area())
      return true;
    return false;
  }
};

int main() {
    
  Square s1(4);
  Square s2(3);

  if (s1 > s2) {
    cout << "S1 is larger than S2\n";
  } else if (s1 < s2) {
    cout << "S1 is smaller than S2\n";
  } else {
    cout << "S1 is equal to S2\n";
  }

  s2.side = 4;

  if (s1 > s2) {
    cout << "S1 is larger than S2\n";
  } else if (s1 < s2) {
    cout << "S1 is smaller than S2\n";
  } else {
    cout << "S1 is equal to S2\n";
  }

  return 0;
}
