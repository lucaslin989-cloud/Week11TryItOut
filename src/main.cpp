#include <iostream>
#include <string>

using namespace std;

class Vector2D{
    public:
        double x;
        double y;
        Vector2D(double x=0, double y=0):x(x), y(y){}

        Vector2D operator+(const Vector2D& other)const{
            return{x+other.x,y+other.y};
        }

};


int main(){
    Vector2D position(10,5);
    Vector2D velocity(1,-2);
    position=position+velocity;

    cout<<"Position: ( "<<position.x<<", "<<position.y<<")\n";

    return 0;
}