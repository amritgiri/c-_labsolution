// WAP to illustrate overloading of function template with ordinary function.

#include<iostream>

using namespace std;

template<class T>
T test(T a, T b){
    cout<<"calling template function..."<<endl;
    cout<<"Value of float: "<<a<<" "<<b<<endl;
    return 0;
}

void test(int a, int b){
    cout<<"calling normal function..."<<endl;
    cout<<"Value of integer: "<<a<<" "<<b<<endl;
}

int main(){
    int a,b;
    float m,n;
    cout<<"Enter two integer: ";
    cin>>a>>b;
    cout<<"Enter two fractional number: ";
    cin>>m>>n;
    test(m,n);
    test(a,b);

    return 0;   
}