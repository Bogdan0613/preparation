#include <iostream>

using namespace std;

template<typename T>
class MyClass{
public:
    MyClass(T value){
        this->value = value;
    }
    void DataTypeSize(){
        cout << sizeof(value)<<endl;
    }
private:
    T value;
};

class Point{
public:
    Point(){
        x = y = z = 0;
    }
    Point(double x, double y, double z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    double x;
    double y;
    double z;
};

int main(){
    Point a;

    MyClass<Point> c(a);
    c.DataTypeSize();
    return 0;
}