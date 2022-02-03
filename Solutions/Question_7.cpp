// Repeat program 6 using friend function.

#include<iostream>

using namespace std;

class check{
    private:
        int i = 0;
    public:
        check(){}
        check(int increment);
        friend check operator++(check&);
        void display();
};

check::check(int increment){
    this->i = increment;
}

check operator++(int a){
    return (++a);
}

void check::display(){
    cout<<"Value of i: "<<i<<endl;
}

int main(){
    check c;
    c= check(23);
    
    c.display();

    ++c;
    c.display();

    return 0;
}