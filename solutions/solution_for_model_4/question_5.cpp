// question 5

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class parent1{
    private:
        string name;
        string address;

    public:
        void getdata();
        void putdata();
};

void parent1::getdata(){
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your address: ";
    getline(cin,address);
}
void parent1::putdata(){
    cout<<"Detail:\n";
    cout<<"\nName: "<<name<<endl<<"Address: "<<address<<endl;
}

class child1:public parent1{
    private:
        int roll;
        char phone[10];
    public:
        void get();
        void put();
};

void child1::get(){
    cout<<"Enter Roll number: ";
    cin>>roll;
    cout<<"Enter phone number: ";
    cin>>phone;
}
void child1::put(){
    cout<<"Roll"<<roll<<endl<<"Phone number: "<<phone<<endl;
}

class child2:public child1{
    int age;
    float price;
    public:
        void takedata();
        void display();
};

void child2::takedata(){
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter price: ";
    cin>>price;
}

void child2::display(){
    cout<<"Age: "<<age<<endl<<"Price: "<<fixed<<setprecision(2)<<price<<endl;
}

int main(){
    child2 c2;
    c2.getdata();
    c2.get();
    c2.takedata();
    c2.putdata();
    c2.put();
    c2.display();

    return 0;
}