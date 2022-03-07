// WAP to implement multiple exception handling using multiple catch statements.
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
    catch(char c){
        cout<<"Catch a character"<<endl;
    }
    catch(int m){
        cout <<"Catch an integer"<<endl;
    }
    catch(double d){
        cout<<"Catch a fraction"<<endl;
    }
    cout<<"End of catch system"<<endl;
}

int main(){
    cout<<"Testing multiple catches\n";
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