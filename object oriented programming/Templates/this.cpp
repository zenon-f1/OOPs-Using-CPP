#include<iostream>
using namespace std;

class Coordinate{
    private:
        int x,y;
    public:
        Coordinate(int x, int y){
            this->x=x;
            this->y=y;
        }
        void print_coordinate(){
            cout<<"(x, y) = ("<<this->x<<"," <<this->y<<")"<<endl;
        }
};
int main(){
    Coordinate pointA(2,3), pointB(5,6);

    pointA.print_coordinate();
    pointB.print_coordinate();
    
    return 0;
}