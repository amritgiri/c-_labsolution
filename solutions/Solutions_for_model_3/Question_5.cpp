// Repeat program 4 using friend function.
#include<iostream>

using namespace std;

class Distance{
    float m=0;
    float cm =0 ;
    public:
        Distance(){
            this-> m = m;
            this -> cm = cm;
        }
        Distance(float meter, float centimeter);
        friend Distance operator+(Distance&, Distance&);
        void display();
};

Distance ::Distance(float meter, float centimeter){
    this->m = meter;
    this->cm = centimeter;
}

void Distance ::display(){
    cout<<"meter: "<<m<<endl;
    cout<<"centimeter: "<<cm<<endl<<endl;
}

Distance operator+(Distance& d1, Distance& d2){
    Distance temp;
    temp.m = d1.m+d2.m;
    temp.cm = d1.cm+d2.cm;

    return (temp);
}

int main(){
    Distance d1,d2,d3;

    d1 = Distance(2,200);
    d2 = Distance(3,300);
    d3 = d1+d2;

    cout<<"D1: "<<endl;
    d1.display();
    cout<<"D2: "<<endl;
    d2.display();
    cout<<"After addition of D1 and D2 result D3 is: "<<endl;
    d3.display();

    return 0;
}