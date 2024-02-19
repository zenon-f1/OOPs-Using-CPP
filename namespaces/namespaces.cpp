#include<iostream>
using namespace std;
/*
There are three ways to use namespace in C++
1. Using Scope Resolution Operator 
2. Using Directive
3. Using Declaration
*/
//* 1. Using Scope Resolution Operator 
namespace ns1{
    // function,class,user-defined data types or nested namespaces
    void greet(){
        cout<<"Hello from namespace ns1 "<<endl;
    }
}
namespace ns2{
    void greet(){
        cout<<"Hello from namespace ns2"<<endl;
    }
    int var = 10;
    int func(){
        return var*3;
    }
}
int main(){
    ns1::greet(); //  greet() from ns1
    ns2::greet(); // greet() from ns2
    
    return 0;
}