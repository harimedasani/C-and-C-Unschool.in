#include <iostream>
using namespace std;

int area(int b,int h){
	float A;
	A=(b*h)/2;
	cout<<"The area of triangle :" << A;
}
float area(float r){
	float A;
	A=3.14*r*r;
	cout<<"The area of Circle :" << A;
	
}
double area(double x,double y){
	float A;
	A=x*y;
	cout<<"The area of rectangle :" << A;	
}

int main(){
	area(2,2);
	cout<<"\n";
	area(3.4);
	cout<<"\n";
	area(2.5,2.5);
	return 0;
}
