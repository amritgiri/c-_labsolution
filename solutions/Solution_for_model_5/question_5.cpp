// 5. WAP to create a class SHAPE with value as data member and constructor to initialize its data. Derive two Classes SQUARE and CIRCLE from SHAPE. Define FindPerimeter() in both the derived classes and find the perimeter of square and circumference of circle using value as length of square and radius of circle. Implement run time polymorphism using above classes.
#include<iostream>
#define PI 3.141592654
using namespace std;

class Shape{
    protected:
        int radius,length;
    public:
        Shape(){
            radius = 0;
            length = 0;
        }
        Shape(int r, int l){
            radius = r;
            length = l;
        }
        virtual int findperimeter() = 0;
};

class square:public Shape{
    public:
        square(){}
        square(int r, int l):Shape(r, l){}
        int findperimeter(){
            return 4*length;
        }
};

class circle:public Shape{
    public:
        circle(){}
        circle(int r, int l):Shape(r, l){}
        int findperimeter(){
            return 2*PI*radius;
        }
};

int main(){
    Shape *ptr;
    square s(5,12);
    circle c(5,12);
    ptr = &s;
    cout<<"Perimeter of square is: "<<ptr->findperimeter()<<endl;

    ptr = &c;
    cout<<"Perimeter of circle is: "<<ptr->findperimeter()<<endl;

    system("pause");
    return 0;
}