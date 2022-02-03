// WAP to overload increment operator (++) using member function.
#include<iostream>

using namespace std;

class check{
    private:
        int i;
    public:
        check(){}
        check(int increment){
            i = increment;
        }
        void operator++(){
            ++i;
        }
        void display(){
            cout<<"value of i: "<<i<<endl;
        }
};

int main(){
    check d1;
    d1 = check(12);

    d1.display();
    cout<<"after increment using ++ operator"<<endl;
    ++d1;
    d1.display();
    return 0;
}
