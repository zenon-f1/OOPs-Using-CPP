#include<iostream>
using namespace std;
class Student{
    public:
        void student(){
            cout<<"From Student"<<endl;
        }
};
class Exam:public Student{
    public:
        void exam(){
            cout<<"From Exam"<<endl;
        }
};
class Result:public Exam{
    public:
        void result(){
            cout<<"From Result"<<endl;
        }
};
int main(){
    Result r;
    r.exam();
    r.student();
    r.result();
    return 0;
}