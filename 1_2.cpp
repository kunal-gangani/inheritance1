/*
2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
- Class R has following members: toKelvin() method

Output:

*/
#include<iostream>
using namespace std;
class P{
	public:
		double celsius;
		double fahrenheit;
		double kelvin;
		void takeInput(){
			cout<<"Enter Celsius : ";
			cin>>celsius;
		}
};
class Q : public P{
	public:
		void toFahrenheit(){
			fahrenheit=(18×celsius)+32;
			cout<<celsius<<" Celsius is "<<fahrenheit<<" Fahrenheit "<<endl;
		}
};
class R : public Q{
	public:
		void toKelvin(){
			kelvin=(32*fahrenheit-32)×5/9+273.15;
			cout<<"Fahrenheit "<<fahrenheit<<" to "<<kelvin<<" Kelvin ";
		}
};
int main(){
	R r;
	r.takeInput();
	r.toFahrenheit();
	r.toKelvin();
	return 0;
}
