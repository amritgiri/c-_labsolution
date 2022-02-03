//4.	Define a class named Distance with meter and centimeter as private members. Use appropriate member functions to read and display data members. Use class Distance to read two objects of distance class and add them by passing this objects to the function and display the result.

#include<iostream>
#include<conio.h>

using namespace std;

class Distance{
	private:
		float meter, centimeter;
	public:
		void dist_read();
		void dist_display();
		void dist_add(Distance d1,Distance d2);
};

void Distance::dist_read(){
	cout<<"Enter meter: ";
	cin>>meter;
	cout<<"Enter centimeter: ";
	cin>>centimeter;	
}
void Distance::dist_add(Distance d1,Distance d2){
	meter = d1.meter+d2.meter;
	centimeter = d1.centimeter+d2.centimeter;
	
	meter = meter+(centimeter/100);
	centimeter = meter*100;
	
}
void Distance::dist_display(){
	cout<<"\n\ndistance in meter: "<<meter<<endl<<"distance in centimeter: "<<centimeter<<endl;
}

int main(){
	Distance d1,d2,d3;
	cout<<"For 1st"<<endl;
	d1.dist_read();
	cout<<"\nFor 2nd"<<endl;
	d2.dist_read();
	d3.dist_add(d1,d2);
	d3.dist_display();
	getch();
	return 0;
}
