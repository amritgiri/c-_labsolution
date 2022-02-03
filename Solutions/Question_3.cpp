// WAP as your choice to use this pointer to return an object of class from a member function of class
#include<iostream>

using namespace std;

class Employee{
    private:
        int id;
        string name;
        float salary;
    public:
        Employee(int id, string name, float salary){
            this->id = id;
            this->name = name;
            this->salary = salary;
        }
        void display(){
            cout<<id<<" "<<name<<" "<<salary<<endl;
        }
};


int main(){
    Employee e1(101,"Zayn", 890000), e2(102,"Harry",890000);
    cout<<"ID"<<" "<<"Name"<<" "<<"salary"<<endl;
    e1.display();
    e2.display();

    return 0;
}