// Define a class Distance with data members meters and centimeters and appropriate function members. Overload binary plus operator to use for addition of two objects of the class using member function.

#include<iostream>

using namespace std;

class Distance{
    float m, cm;
    public:
        Distance(){}
        Distance(float meter, float centimeter){
            m = meter;
            cm = centimeter; 
        }
        Distance operator+(Distance d);
        void display();
};

Distance Distance::operator+(Distance d){
    Distance temp;
    temp.m = m + d.m;
    temp.cm = cm + d.cm;
    return (temp);
}

void Distance::display(){
    cout<<"meter: "<<m<<endl;
    cout<<"centimeter: "<<cm<<endl<<endl;
}

int main(){
    Distance d1,d2,d3;
    d1 = Distance(2.5, 200);
    d2 = Distance(1.6, 270);
    d3 = d1+d2;

    cout<<"D1: "<<endl;
    d1.display();
    cout<<"D2: "<<endl;
    d2.display();
    cout<<"After addition of D1 and D2 result D3 is: "<<endl;
    d3.display();

    return 0;
}