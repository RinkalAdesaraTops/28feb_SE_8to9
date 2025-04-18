//function overloading
#include<iostream>
using namespace std;
#define pi 3.14
void area(float r){
	cout<<"\n Area of circle is "<<pi*r*r;
}
void area(int l,int h){
	cout<<"\n Area of Rectangle is "<<l*h;
}
void area(int l,int h,int b){
	cout<<"\n Area of triangle is "<<l*h*b;
}
main(){
	area(2.5);
	area(4,5);
	area(4,5,10);
}
