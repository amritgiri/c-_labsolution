// 2. WAP to implement the following form of inheritance:
//fig in question

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class student{
    private:
        int roll;
    public:
        void sget(){
            cout<<"Enter your roll number: ";
            cin>>roll;
        }
        void sdisplay(){
            cout<<"Roll: "<<roll<<endl;
        }
};

class test:virtual public student{
    protected:
        string name;
    public:
        void tget(){
            cout<<"Enter your name: ";
            getline(cin,name);
            
        }
        void tdisplay(){
            cout<<"Name: "<<name<<endl;
            student::sdisplay();
        }
};

class sports:virtual public student{
    private:
        int price;
    public:
        void ssget(){
            cout<<"Enter the price: ";
            cin>>price;
        }
        void ssdisplay(){
            cout<<"Price: "<<fixed<<setprecision(2)<<price<<endl;
        }
};
class result: public test,public sports{
    int fee;
    public:
        void rget(){
            cout<<"Enter fee: ";
            cin>>fee;
        }
        void rdisplay(){
            test::tdisplay();
            sports::ssdisplay();
            cout<<"Fee: "<<fee<<endl;
        }
};

int main(){
    result r;
    cout<<"Enter the following details: "<<endl;
    r.tget();
    r.sget();
    r.ssget();
    r.rget();
    cout<<"Details: "<<endl;
    r.rdisplay();
    
    system("pause");
    return 0;
}