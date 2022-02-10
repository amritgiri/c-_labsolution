// WAP to illustrate access of private, protected and public data members.
#include<iostream>

using namespace std;

class Member{
    private:
        int pr;
    protected:
        int po;
    public:
        int pu;
        Member(){
            pr = 100;
            pu = pr*2;
            po = 100+pu;
        }
        void display_nameClass(){
            cout<<"value of pr in Member class is: "<<pr<<endl<<endl;
        }
};

class Derived:private Member{
    public:
        void display(){
            cout<<"Values in Derived class as private Member class: \n";
            cout<<"pr is not accessable"<<endl;
            cout<<"value of pu: "<<pu<<endl;
            cout<<"value of po: "<<po<<endl<<endl;
        }
};
class Derived1:protected Member{
    public:
        void display(){
            cout<<"Values in Derived class as protected Member class: \n";
            cout<<"pr is not accessable"<<endl;
            cout<<"value of pu: "<<pu<<endl;
            cout<<"value of po: "<<po<<endl<<endl;
        }
};

class Derived2:public Member{
    public:
        void display(){
            cout<<"Values in Derived class as public Member class: \n";
            cout<<"pr is not accessable"<<endl;
            cout<<"value of pu: "<<pu<<endl;
            cout<<"value of po: "<<po<<endl;
        }
};

int main(){
    Member m;
    m.display_nameClass();
    Derived d;
    d.display();
    Derived1 d1;
    d1.display();
    Derived2 d2;
    d2.display();

    return 0;
}