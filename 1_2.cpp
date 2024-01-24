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
		void takeInput(){
			cout<<"Enter Celsius : ";
			cin>>celsius;
		}
};
class Q : public P{
	public:
		void toFahrenheit(){
			cout<<" Celsius is "<<1.8*celsius+32<<" Fahrenheit "<<endl;
		}
};
class R : public Q{
	public:
		void toKelvin(){
			cout<<"Celsius is "<<celsius<<" Kelvin is "<<celsius+273.15;
		}
};
int main(){
	R r;
	r.takeInput();
	r.toFahrenheit();
	r.toKelvin();
	return 0;
}
