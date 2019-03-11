#include <iostream>
#include <cmath>
using namespace std;

float func(float x)
{
	x=2*cos(x)-0.5*x*x;
	return x;
}

float dfunc(float x){
	x=-2*sin(x)-x;
	return x;
}
int main(){
	float a;
	cin>>a;
	cout<<"f(a)= "<<func(a)<<" f'(a)= "<<dfunc(a)<<" a= "<<a<<endl;
		for (int i=0; i<10; i++){
			if(func(a)==0) {
				cout<<"Mz: "<<a;
				return 0;
			}
			else if(dfunc(a)==0) {cout<<"Trafiles na punkt z pochodna rowna 0, tego przypadku program nie obsluguje..."; return 0;}
			else
			a-=func(a)/dfunc(a);

			cout<<"f(a)= "<<func(a)<<" f'(a)= "<<dfunc(a)<<" a= "<<a<<endl;
		}
	return 0;
}
