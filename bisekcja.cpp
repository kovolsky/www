#include <iostream>
#include <cmath>
using namespace std;

float func(float x)
{
	x=2*cos(x)-0.5*x*x;
	return x;
}
int main(){
	float a, b, pol;
	cin>>a>>b;
	if(func(a)*func(b)>=0) cout<<"Zly przedzial";
	else{
		for (int i=0; i<10; i++){
			cout<<"a= "<<a<<" b= "<<b<<endl;
			pol=(a+b)/2;
			if(func(a)*func(pol)<0) b=pol;
			else if(func(b)*func(pol)<0)a=pol;
			else {
				cout<<"Mz: "<<pol;
				return 0;
			}
			}
		}
	cout<<"a= "<<a<<" b= "<<b<<endl;
	return 0;
}
