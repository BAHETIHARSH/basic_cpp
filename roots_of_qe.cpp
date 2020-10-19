#include <iostream>
using namespace std;
#include <cmath>
int main(){
	float x,p,q,a,b,c;
	cout<<"enter coefficient of X2 : ";cin>>a;
	cout<<"enter coefficient of X : ";cin>>b;
	cout<<"enter constant : ";cin>>c;
	
	x=sqrt(((b*b)-4*a*c));
	q=(-b+x);
	p=q/(2*a);
	cout<<p;


	return 0;
}
