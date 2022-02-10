// Create two classes: Distance1 with data members: feet and inch and Distance2 with data members: m and cm. WAP to convert object of Distance1 to Distance2.[1m = 3.28feet]

#include<iostream>

using namespace std;

class Distance1{
    int feet;
    float inches;
    public:
        Distance1(){
            feet = 0;
            inches = 0.0;
        }
        void getdata(){
            cout<<"Enter values:\n";
            cout<<"Feet: ";
            cin>>feet;
            cout<<"Inches: ";
            cin>>inches;
        }
        int getfeet(){
            return feet;
        }
        int getinches(){
            return inches;
        }
        void displaydata(){
            cout<<"Entered value of feet and inches: "<<endl;
            cout<<feet<<"ft "<<inches<<"inc" <<endl;
        }
};

class Distance2{
    int meter, centimeter;
    public:
        Distance2(){
            meter = 0.0;
            centimeter = 0.0;
        }
        Distance2(Distance1 d1){
            int x;
            x = (d1.getfeet() + (d1.getinches()/12));
            meter = x/3.280833;
            centimeter = meter * 100;
        }
        void display(){
            cout<<"The value in meter and centimeter is :\n";
            cout<<"meter: "<<meter<<endl<<"centimeter: "<<centimeter<<endl;
        }
};

int main(){
    Distance1 d;
    d.getdata();
    Distance2 d2;
    d2 = d;
    d.displaydata();
    d2.display();

    return 0;
}