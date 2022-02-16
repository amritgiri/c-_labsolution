// WAP to convert object of class with data members feet and inches to meter.
#include<iostream>

using namespace std;

class Distance{
    int feet;
    float inches;
    public:
        Distance(){
            feet = 0;
            inches = 0.0;
        }
        // Distance(int ft, float inc){
        //     feet = ft;
        //     inches = inc;
        // }
        operator float(){
            float f;
            f = inches/12;
            f += float(feet);
            return (f/3.280833);
        }
        void getdata();
};

void Distance :: getdata(){
    cout<<"Enter datas accordingly: "<<endl<<"Feet: ";
    cin>>feet;
    cout<<"Inches: ";
    cin>>inches;
    // operator float();
}

int main(){
    Distance d;
    d.getdata();
    float meter = d;
    cout<<"The value in meter: "<<meter;
    return 0;
}