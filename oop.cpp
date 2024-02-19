#include <iostream>
using namespace std;

// class Student
// {
//     private:
//     int bankbalance = 454422;
//     int age = 18; // data member
//     public:
//     void print_age(void)
//     { // member function
//         cout << "Age : " << age << endl;
//     }
//     void print_balance(void){
//         cout<<"Balance : "<<bankbalance<<endl;
//     }
// };

// class House{
//     string city;
//     int price;
//     public:
//         House(){
//             cout<<"From House"<<endl;
//         }
//         House(string city, int price){
//             this->city = city;
//             this->price = price;
//             cout<<"City Name: "<<city<<endl;
//             cout<<"House Price: "<<price<<endl;
//         }
//         ~House(){
//             cout<<"Destructor called"<<endl;
//         }
// };

class Add{
    public:
    int sum(int a,int b){
        return a+b;
    }
    int sum(double a,double b){
        return a+b;
    }
    int sum(int a,int b,int c){
        return a+b+c;
    }

};
int main()
{
    // Student s; // object creation
    // s.print_age();
    // s.print_balance();

    // House h;
    // House j("NYC",45544);

    Add a;
    cout<<a.sum(34,66)<<endl;
    cout<<a.sum(34.12,66.56)<<endl;
    cout<<a.sum(34,66,56)<<endl;
    return 0;
}