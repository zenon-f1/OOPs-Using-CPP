#include<iostream>
#include<fstream>
/*
The useful classes for working with files in c++
1. fstreambase
2. ifstream --> derived fro fstreambase
3. ofstream --> derived fro fstreambase
*/
/* 
There are two ways to open a file
1. Using the constructor
2. Using the member function open() of the class
*/

using namespace std;

int main(){
    string st = "Rohan";
    // Opening files using constructor and writing it
    // ofstream out("sample.txt"); // write operation
    // out<<st;

    // Opening files using constructor and reading it
    string st2;
    ifstream in("sample1.txt"); // write operation
    // in>>st2; // only a single word
    getline(in,st2); // first line
    getline(in,st2); // second line with both getlines
    cout<<st2;
    return 0;
}