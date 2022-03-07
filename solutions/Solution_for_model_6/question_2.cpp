// WAP to implement class template.
#include<iostream>

using namespace std;

template<class T>

class test{
    T first;
    public:
        test(){
            first = 0;
        }
        test(T x){
            this->first = x; 
        }
        T SQ(){
            return first*first;
        }
};

int main(){
    test <int> Sqi(5);
    test <float> Sq2(2.5);
    cout<<"Area with integer: "<<Sqi.SQ();
    cout<<"\nArea with float: "<<Sq2.SQ();

    return 0;
}