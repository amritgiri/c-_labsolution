//3.	Write a program in C++ which has class Employee with data members: name, address, age and salary and member functions read and display data members. Use this class to read records of 10 employees and display them.
#include<iostream>
// #include<conio.h>
#include<string>
#include<iomanip>

using namespace std;

int ss;

class Employee{
	private:
		string emp_name, emp_address;
		int emp_age;
		float emp_salary;
	public:
		void emp_read();
		void emp_display();
};

void Employee::emp_read(){
	int i;
	cout<<"\nEmployee data input: "<<endl<<endl;
	cout<<"Enter name: ";
	cin>>emp_name;
	cout<<"Enter address: ";
	cin>>emp_address;
	cout<<"Enter age: ";
	cin>>emp_age;
	cout<<"Enter salary: ";
	cin>>emp_salary;
}
	
void Employee::emp_display(){
	
	cout<<left<<setw(15)<<emp_name<<left<<setw(2)<<"|"<<left<<setw(15)<<emp_address<<left<<setw(2)<<"|"<<left<<setw(5)<<emp_age<<left<<setw(2)<<"|"<<left<<setw(8)<<emp_salary<<endl;		
}

int main(){
	int choose;
	cout<<"Enter the array ss[max:20]:: ";
	cin>>ss;
	Employee e[ss];
	
	for(int i = 0; i<ss; i++){
		e[i].emp_read();
	}
	
	cout<<"\n\nEmployee details: \n\n"<<endl;
	cout<<left<<setw(15)<<"Name"<<left<<setw(2)<<"|"<<left<<setw(15)<<"Address"<<left<<setw(2)<<"|"<<left<<setw(5)<<"Age"<<left<<setw(2)<<"|"<<left<<setw(8)<<"Salary"<<endl;
	for(int i = 0; i<ss; i++){
		e[i].emp_display();
	}
	
	// getch();
	return 0;
}