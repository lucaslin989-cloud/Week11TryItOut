#include <iostream>
#include <string>
using namespace std;
template<typename T1, typename T2>
class Vector2D{
    public:
        T1 x;
        T2 y;
        Vector2D(T1 x=0, T2 y=0):x(x), y(y){}

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