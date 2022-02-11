//6.	WAP which has two classes as your choice such that function members of one class use private members of another class.

#include<iostream>

using namespace std;

class B;

class A{
	public:
		void display(B obj);
};

class B{
	int x;
	public:
		B(){
			x= 4;
			
		}
		friend void A::display(B);
};
void A::display(B obj){
	cout<<"Value of x from object B displaying using object A: "<<obj.x<<endl;
}

int main(){
	A a;
	B b;
	a.display(b);
	// getch();
	return 0;
}
