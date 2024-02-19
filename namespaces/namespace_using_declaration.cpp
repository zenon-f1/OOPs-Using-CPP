#include<iostream>
using namespace std;

//* 3. Using Declaration
#include "namespace_declaration.h"
using namespace ns1; // using directive 
using ns2::print_text; // using declaration

int main(){
    print_text();
    hello();
    return 0;
}