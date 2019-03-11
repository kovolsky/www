#include <iostream>
#include <cmath>
using namespace std;

float func(float x)
{
	x=2*cos(x)-0.5*x*x;
	return x;
}
int main(){
	float a, b, c, fa, fb;
	cin>>a>>b;
	if(func(a)*func(b)>=0) cout<<"Zly przedzial";
	else{
		for (int i=0; i<10; i++){
			fa=func(a); fb=func(b);
			c=(fb*a-fa*b)/(fb-fa);
			if(fa*func(c)<0) b=c;
			else if(fb*func(c)<0) a=c;
			else {
				cout<<"Mz: "<<c;
				return 0;
			}
			cout<<"c= "<<c<<endl;
			}
		}
	cout<<"a= "<<a<<" b= "<<b<<endl;
	return 0;
}
