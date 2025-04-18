#include<iostream>
//polymorphism -- one nAMe multiple form
//run time -  dynamic binding method overiding
//compile time - static binding
using namespace std;
#define pi 3.14
class A{
	public:
		A(){
		cout<<"\n Constructor called.";
		}
		void area();
};
class B: public A{
	public:
		
		float r;
		void area(){
			cout<<"\nEnter radious:";
			cin>>r;
			cout<<"\n Area of circle is "<<pi*r*r;
		}
	//area of circle
};
class C: public A{
	//area of rectangle
	public:
	void area(int l,int h){
		cout<<"\n Area of rectangle is "<<l*h;
	}
};
class D: public A{
	//area of triangle
	public:
	void area(int l,int h,int b){
		cout<<"\n Area of triangle is "<<l*b*h;
	}
};
main(){
	B obj1;
	C obj2;
	D obj3;
	obj1.area();
	obj2.area(4,5);
	obj3.area(4,6,7);
}
