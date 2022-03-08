// WAP to illustrate exception handling mechanism.
#include<iostream>
using namespace std;

int main(){
    float a,b;
    
    cout<<"Enter value of a and b(task [a/b]): ";
    cin>>a>>b;

    try{
        if(b != 0){
            cout<<"[a/b] = "<<a/b<<endl;
        }
        else{
            throw(b);
        }
    }
    catch(float i){
        cout<<"ERROR"<<endl;
    }

    return 0;
}