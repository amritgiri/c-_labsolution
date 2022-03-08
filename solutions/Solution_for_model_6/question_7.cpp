// Modify above program to handle multiple exceptions using single catch statements

#include<iostream>

using namespace std;

void test(int x){
    try{
        if(x==1){
            throw x;
        }
        else if(x==0){
            throw 'x';
        }
        else if(x==-1){
            throw 1.0;
        }
        cout<<"End of try block"<<endl;
    }
    catch(...){
        cout<<"Caught an exception"<<endl;
    }
    cout<<"End of catch system"<<endl;
}

int main(){
    cout<<"Testing single catches\n";
    cout<<"x = 1"<<endl;
    test(1);
    cout<<"x = 0"<<endl;
    test(0);
    cout<<"x = -1"<<endl;
    test(-1);

    cout<<"x = 2"<<endl;
    test(2);

    return 0;
}