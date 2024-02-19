#include<iostream>
using namespace std;

class Person{
    private:
        int age;
        string name;
    public: 
        Person(string name,int age){
            this->name=name;
            this->age=age;
        }
        void toString(){
            cout<<name<<" is "<<age<<" years old."<<endl;
        }
};
template <class T>
void printData(T &obj){
    obj.toString();
}
int main(){
    Person p1 = Person("Karthik",23);
    printData(p1);
    return 0;
}