#include<iostream>
using namespace std;
// class is a user defined data type, consists data members and member functions

//* Syntax
class ClassName{
    private:
        int dataMembers;
    public: 
        void member_functions(){
            // code 
        }
};
class Dog{
    private:
        string breed,color;
    public:
        void printProperties(void){
            cout<<breed<<endl;
            cout<<color<<endl;
        }
};
int main(){
    // object declaration
    ClassName obj1;

    return 0;
}