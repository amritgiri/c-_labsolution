// 3. WAP in C++ to illustrate the execution order of constructors and destructors when both the base and derived class has constructor and destructor in single and multiple inheritances.
#include<iostream>

using namespace std;

class base{
    public:
        base(){
            cout<<"Constructor of base class."<<endl;
        }
        ~base(){
            cout<<"Destructor of base class."<<endl;
        }
};

class derived1:public base{
    public:
        derived1(){
            cout<<"Constructor of derived1 class. \n"<<endl;
        }
        ~derived1(){
            cout<<"Destructor of derived1 class. "<<endl;
        }
};

class base1{
    public:
        base1(){
            cout<<"Constructor of base1 class."<<endl;
        }
        ~base1(){
            cout<<"Destructor of base1 class. "<<endl;
        }
};
class derived2:public base, public base1{
    public:
        derived2(){
            cout<<"Constructor of derived2 class.\n"<<endl;
        }
        ~derived2(){
            cout<<"Destructor of derived2 class. "<<endl;
        }
};


int main(){
    {cout<<"Single inheritance :"<<endl;
    derived1 d1;
    }{
    cout<<"\n\nmultiple inheritance: "<<endl;
    derived2 d2;
    }
    system("pause");
    return 0;
}