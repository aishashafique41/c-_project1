#include<iostream>
using namespace std;
int main(){
	int fact=0;
	int n=10;
	for(int i=1;i<=n;i++){
		if(i%3==0){
			sum+=i;
		}
	}
	cout<<"sum of numbrs that are devisible by 3 is ="<<sum<<endl;
	return 0;
}
