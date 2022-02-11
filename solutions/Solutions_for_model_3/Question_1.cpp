// WAP to illustrate the use of static data member in a class.
#include<iostream>

using namespace std;

class item{
    private:
        static int count;
        int number;
    public:
        void getdata(int);
        void getcount();
};

void item::getdata(int a){
    number = a;
    count++;
}

void item::getcount(){
    cout<<"Count: "<<count<<endl;
}

int item::count;

int main(){
    item a,b,c;//count initialize to zero
    a.getcount();//display count
    b.getcount();
    c.getcount();
    //getting data into object
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<<"After reading data"<<endl;

    a.getcount();//display count
    b.getcount();
    c.getcount();

    return 0;
}