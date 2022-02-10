// WAP to convert meter into a type of class Distance with data members feet and inches.[meter to feet formula: feet = m*3.280833]
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
        Distance(float);
        void display();
};

Distance::Distance(float m){
    float f = m *3.280833;
    f = int(f);
    inches = 12*(f-feet);
}

void Distance::display(){
    cout<<"Value in feet and inches is :"<<endl<<feet<<"\'ft "<<inches<<"\'' inches"<<endl;
}

int main(){
    Distance d;

    float meter;
    cout<<"Enter values in meter: ";
    cin>>meter;

    d = meter;
    d.display();

    return 0;
}