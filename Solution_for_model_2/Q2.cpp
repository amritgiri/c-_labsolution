//2.	WAP to illustrate the working of constructor and destructor. Use appropriate "cout" statements and blocks to show the sequence of object construction and destruction.

#include<iostream>
// #include<conio.h>

using namespace std;

int count=0;

class test{
	public:
		test(){
			count++;
			cout<<"\nConstructor Msg: Object Number "<<count;
		}
		~test(){
			cout<<"\n\nDestructor msg: Object number "<<count<<endl;
			count--;
		}
};

int main(){
	cout<<"Inside the main block.."<<endl;
	cout<<"Creating first objevct T1.."<<endl;
	
	test T1;
	{
		//Block1
		cout<<"\n\n Inside Block 1"<<endl;
		cout<<"\nCreating two more objects T2 and T3.."<<endl;
		test T2,T3;
		cout<<"\nLeaving Block 1.."<<endl;
	}
	cout<<"\nBack inside main block.."<<endl;
	// getch();
	return 0;
}
