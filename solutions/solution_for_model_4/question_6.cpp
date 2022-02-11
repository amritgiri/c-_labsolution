//Create a class Cricketer with member variables to represent name,age and number of matches played. From this class bowler and batsman. Bowler class has number of wickets as member variable and batsman class has runs and centuries as member variables. Use appropriate member function in all classes to read and display respective data.
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

class Cricketer{
    protected:
        string name;
        int age;
        int num_matches_played;
    public:
        void get_data();
};
void Cricketer::get_data(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter number of matches played: ";
    cin>>num_matches_played;
}
class Bowler:public Cricketer{
    int no_ofWickets;
    public:
        void get();
        void put();
};

void Bowler::get(){
    Cricketer::get_data();
    cout<<"Enter number of wickets taken: ";
    cin>>no_ofWickets;
}

void Bowler::put(){
    cout<<"Details of bowler:"<<endl;
    cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"No of matches: "<<num_matches_played<<endl<<"Wickets taken: "<<no_ofWickets<<endl;
}

class Batsman:public Cricketer{
    int runs,centuries;
    public:
        void getdata();
        void putdata();
};

void Batsman::getdata(){
    
    Cricketer::get_data();
    cout<<"Enter number of runs made: ";
    cin>>runs;
    cout<<"Enter number of Centuries made: ";
    cin>>centuries;
}

void Batsman::putdata(){
    cout<<"\n\nDetails of Batsman:"<<endl;
    cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"No of matches: "<<num_matches_played<<endl<<"Runs made: "<<runs<<endl<<"Centuries made: "<<centuries<<endl;
}

void start(){
    system("cls");
    Batsman bt;
    Bowler bo;
    cout<<"Give details of batsman:"<<endl;
    bt.getdata();
    bt.putdata();
    cout<<"\n\nGive details of bowler:"<<endl;
    bo.get();
    bo.put();
}

int main(){
    start();

    system("pause");
    return 0;
}