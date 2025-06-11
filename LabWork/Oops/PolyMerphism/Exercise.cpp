#include<iostream>
using namespace std;

class Shape {
public:
    virtual float area()=0;
    virtual float perimeter()=0;
};
class Rectangle:public Shape {
private:
    float length;
    float breadth;
public:
    Rectangle(int l=20, int b=10) {
        length =l;
        breadth =b;
    }
    float area() {
        return length*breadth;
    }
    float perimeter() {
        return 2*(length*breadth);
    }
};
class Circle:public Shape {
private:
    float radius;
public:
    Circle(float r=3.76F){
       radius =r;
    }
    float area() {
        return 3.14*(radius*radius);
    }
    float perimeter() {
        return 2*(3.14*radius);
    }
};
int main() {
    Shape *ptr = new Rectangle();
    cout<<"The Area of The Rectangle = "<<ptr->area()<<endl;
    cout<<"The Perimeter of The Rectangle = "<<ptr->perimeter()<<endl;
    ptr = new Circle();
    cout<<"The Area of The circle = "<<ptr->area()<<endl;
    cout<<"The Perimeter of The circle = "<<ptr->perimeter()<<endl;
}
