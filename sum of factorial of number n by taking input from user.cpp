#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n :";
	cin>>n;
	long long fact= 1;
	for(int i =1;i<=n;i++){
		fact*=i;
	}
	cout<<"the factorial of number"<<n<<" "<<"is"<<" "<<fact<<endl;
	return 0;
}
