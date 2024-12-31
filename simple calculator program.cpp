#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter x"<<endl;
cin>>x;
int y;
cout<<"enter y"<<endl;
cin>>y;
char operation;
cout<<"enter any operation(+,-,/,%.*) ";
cin>>operation;
switch(operation){
	case'+':
		cout<<"result of sum is"<<x+y<<endl;
		break;
	case'-':
	   cout<<"result of difference is "<<x-y<<endl;
	   break;
	case'/':
	      if(y!=0){
	      	cout<<"result of devision is "<<x/y<<endl;}
	      	else{
			  
	      	cout<<"can not do devision  with 0"<<endl;
		  }
	   break;
	case'%':
	    cout<<"result of modulu is "<<x%y<<endl;
	    break;
	case'*':
	    cout<<"result of multiplication is"<<x*y<<endl;
	    break;
	    default:
	    	cout<<"error invalid operation!"<<endl;
	    	break;
	    }
	    
	    return 0;


}
