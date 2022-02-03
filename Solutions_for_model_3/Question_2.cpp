// WAP to illustrate static member function
#include<iostream>

using namespace std;

class test{
    private:
        int code;
        static int count;
    public:
        void setcode(){
            code = ++count;
        }
        void showcode(){
            cout<<"object number: "<<code<<endl;
        }
        static void showcount(){
            cout<<"count: "<<count<<endl;
        }
};

int test::count;

int main(){
    test t1,t2,t3;

    t1.setcode();
    t2.setcode();

    test::showcount();
    
    t3.setcode();
    test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}