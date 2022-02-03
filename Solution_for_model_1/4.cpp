//Repeat program 3, using concept of class and objects

#include<iostream>

using namespace std;

class area{
	int a;
	float b;
	int c;
	public:
		void getdata(){
			cout<<"Enter integer value of a: ";
			cin>>a;
			cout<<"Enter floating value of b: ";
			cin>>b;
			cout<<"Enter integer value of c: ";
			cin>>c;
		}
		void result(int x){
			cout<<"Area of square: "<<x*x<<endl;
			
		}
		void result(int x, float y){
			cout<<"Area of rectangle is: "<<float(x)*y<<endl;
			
		}
		void result(int x, int y){
			cout<<"Area of triangle is: "<<0.5*x*int(y)<<endl;
		}
		void displaydata(){
			result(a);
			result(a,b);
			result(a,c);
		}
};

main(){
	area a1;
	a1.getdata();
	a1.displaydata();	
}
