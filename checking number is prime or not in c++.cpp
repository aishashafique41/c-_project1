#include<iostream>
//checking wether the number is prime or not.
using namespace std;
int main(){
	int n;
	bool isprime= true;
	cout<<"enter n"<<endl;
	cin>>n;
	
	for(int i=2; i<=n-1;i++){
		if(n%i==0){
			isprime=false;
			break;
		}
		
	}
	if(isprime==false){
	cout<<" non prime number"<<endl;}
	else{
		cout<<"prime number"<<endl;
	}
	return 0;
}
