//1.	Define a class Box with private data members: length and breadth and height. Initialize its data members with some fixed values using a constructor. Use the object of that class and calculate volume of a box.
#include<iostream>

using namespace std;

class box{
	private:
		double ht, len, bth,vol;
	
	public:
		box(double l, double b, double h);
		
		void volume(){
			cout<<"Volume: "<<vol<<endl;
		}
};

box::box(double l, double b, double h){
	len = l;
	bth = b;
	ht = h;
	vol = len*bth*ht;
}

int main(){
	box v(24,57,21);
	
	v.volume();
	return 0;
}
