#include<iostream>
using namespace std;
int main()
{
	float celcius,fahrenheit;
	cout<<"enter temperature in celcius:";
	cin>>celcius;
	
	fahrenheit=(celcius*9.0/5.0)+32;
	
	cout<<"Temperature in fahrenheit is "<<fahrenheit<<"F"<<endl;
	return 0;
}
