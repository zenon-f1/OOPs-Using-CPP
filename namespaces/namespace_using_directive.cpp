#include<iostream>
using namespace std;

//* 2. Using Directive
#include "namespace_student.h"
using namespace School;

int main(){
    Students s1;
    cout<<"school capacity = "<<school_capacity<<endl;
    cout<<"number of students = "<<s1.display()<<endl;
    return 0;
}