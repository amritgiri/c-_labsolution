// WAP to implement template function overloading.
#include<iostream>

using namespace std;

template<class T>
T test(T a, T b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

template<class T>
T test(T a, T b, T c){
    if(a<b&&b<c){
        return a;
    }
    else if(b<c&&b<a){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    cout<<"minimum among 1st two number: "<<test(a,b)<<endl;
    cout<<"minimum among three numbers: "<<test(a,b,c)<<endl;

    return 0;
}