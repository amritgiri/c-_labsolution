// WAP to illustrate the concept of function overriding.

#include<iostream>

using namespace std;

class base{
  public:
    void display(){
        cout<<"function call from base class"<<endl;
    }  
};

class derived1:public base{
    public:
        void display(){
            cout<<"function call from derived class"<<endl;
        }
};

int main(){
    derived1 d1;
    d1.display();
    d1.base::display();

    system("pause");
    return 0;
}