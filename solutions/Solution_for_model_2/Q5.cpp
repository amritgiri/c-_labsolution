//5.	WAP to add and swap private data of two different classes. Use separate function for add and swap.
#include<iostream>

using namespace std;

class class_2;

class class_1{
	private:
		int value1;
	public:
		void indata(int a){
			value1 = a;
		}
		void display();
		
		friend void exchange(class_1 &, class_2 &);
		friend void add(class_1 , class_2 );
};

void class_1::display(){
	cout<<"value1: "<<value1<<endl;
}

class class_2{
	int value2;
	public:
		void indata(int a){
			value2 = a;
		}
		void display();
		friend void exchange(class_1 &, class_2 &);
		friend void add(class_1 , class_2 );
};

void class_2::display(){
	cout<<"value2: "<<value2<<endl;
}

void exchange(class_1 &x, class_2 &y){
	int temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}

void add(class_1 x, class_2 y){
	cout<<"Sum of data values using friend function: "<<x.value1+y.value2<<endl<<endl<<endl;
}

int main(){
	class_1 c1;
	class_2 c2;
	
	c1.indata(100);
	c2.indata(200);
	
	add(c1,c2);
	
	cout<<"Value before exchange"<<endl;
	c1.display();
	c2.display();
	exchange(c1,c2);//swaping
	
	cout<<"\n\nValues after exchange"<<endl;
	c1.display();
	c2.display();
		
	// getch();
	return 0;
}
