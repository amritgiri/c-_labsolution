//4. WAP to illustrate casting base class pointer to derived class pointer
#include<iostream>

using namespace std;

class base{
    public:
        virtual void display(){
            cout<<"base class using pointer.\n"<<endl;
        }
};

class derived:public base{
    public:
        void display(){
            cout<<"derived class using pointer\n"<<endl;
        }
};

int main(){
    base *ptr;
    base b;
    cout<<"calling base class using base class pointer: "<<endl;
    ptr = &b;
    ptr->display();
    cout<<"base class pointer to derived class: "<<endl;
    derived d;
    ptr = &d;
    ptr->display();
    system("pause");
    return 0;
}