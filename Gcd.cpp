#include <iostream>
using namespace std;
int main(){
	int a,b,i;
	cout<<"enter first number : ";cin>>a;
	cout<<"enter sceond number : ";cin>>b;
	for(i=a;0<i;i--) {
		if(a%i==0) {
			if(b%i==0){
				cout<<"GCD is : "<<i;
				break;
			}
}
}
	
	
	
	
	return 0;
}
