/*
1. WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
integer data type
- Class Y has following members: setData() and
getData() methods
Output:

*/
#include<iostream>
using namespace std;
class X{
	public:
		int a;
		int b;
		int c;
};
class Y : public X{
	public:
		void setData(){
			cout<<"Enter the Value of A : ";
			cin>>a;
			cout<<"Enter the Value of B : ";
			cin>>b;
			cout<<"Enter the Value of C : ";
			cin>>c;
		}
		void getData(){
			cout<<"The Cube of All three Integers are : "<<endl;
			cout<<"The Cube of A is : "<<a*a*a<<endl;
			cout<<"The Cube of B is : "<<b*b*b<<endl;
			cout<<"The Cube of C is : "<<c*c*c<<endl;
		}
};
int main(){
	Y y;
	y.setData();
	y.getData();
	return 0;
}
