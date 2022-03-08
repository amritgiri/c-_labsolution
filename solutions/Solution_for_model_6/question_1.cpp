// WAP to swap values of two variables using function template.

#include<iostream>

using namespace std;

template<class T>
void Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int m=10,n=7;
    float i=0.123,j=12.12;
    
    cout<<"\n\nValue of m,n,i,j before swap is: \n"<<m<<" "<<n<<"\n"<<i<<" "<<j<<" respectively"<<endl;
    cout<<"\nAfter swap:"<<endl;

    Swap(m,n);
    Swap(i,j);

    cout<<"Value of m,n: "<<m<<" "<<n<<endl;
    cout<<"Value of i,j: "<<i<<" "<<j<<endl;

    return 0;
}