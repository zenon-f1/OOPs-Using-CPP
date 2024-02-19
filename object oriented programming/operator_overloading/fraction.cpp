#include<bits/stdc++.h>
using namespace std;

class Fraction {
    
  public:
  
  int numerator;
  int denominator;
  
  Fraction(int _numerator, int _denominator) {
    numerator = _numerator;
    denominator = _denominator;
  }

  int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
  }
  
  int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
  }

  Fraction operator + (Fraction
    const & x) {

    int num = (numerator * x.denominator) + (x.numerator * denominator);
    int den = (denominator * x.denominator);

    int GCD = gcd(num, den);

    num /= GCD;
    den /= GCD;

    Fraction f(num, den);
    return f;
  }

  Fraction operator * (Fraction
    const & x) {

    int num = (numerator * x.numerator);
    int den = (denominator * x.denominator);

    int GCD = gcd(num, den);

    num /= GCD;
    den /= GCD;

    Fraction f(num, den);
    return f;
  }
};

int main() {
    
  Fraction f1(1, 3);
  Fraction f2(3, 2);
  
  Fraction f3 = f1 + f2;
  Fraction f4 = f1 * f2;

  cout << f1.numerator << "/" << f1.denominator <<
    " + " << f2.numerator << "/" << f2.denominator <<
    " is " << f3.numerator << "/" << f3.denominator << endl;

  cout << f1.numerator << "/" << f1.denominator <<
    " * " << f2.numerator << "/" << f2.denominator <<
    " is " << f4.numerator << "/" << f4.denominator << endl;

  return 0;
}
