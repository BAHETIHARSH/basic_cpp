#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter first number : ";cin>>a;
	cout<<"enter sceond number : ";cin>>b;
	cout<<"enter third number : ";cin>>c;
	if(a>b){
		if(a>c){
			cout<<a<<" is greater"<<endl;
		}
		else{
			cout<<c<<" is greater"<<endl;
		}
	}
	else{
		if(b>c){
			cout<<b<<" is greater"<<endl;
		}
		else{
			cout<<c<<" is greater"<<endl;
		}
	}
	return 0;
}
