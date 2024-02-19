#include<iostream>
using namespace std;

class House{
    private:
        string location;
        int room;
    public:
        // constructor with default parameters 
        House(string loc = "New York City",int room = 5){
            this->location=loc;
            this->room=room;
        }
        // destructor
        ~House(){
            cout<<"Moved away from "<<this->location<<endl;
        }
        
};
int main(){
    House h1;
    House h2("Texas");
    House h3("Florida",9);
    
    return 0;
}