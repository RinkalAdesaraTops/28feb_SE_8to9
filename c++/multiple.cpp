//Multiple
#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"\nDefault A class constructor called";
		}
		void add(int a,int b){
			cout<<"\n Addition is "<<a+b;
		}
};
class B{
	public:
		B(){
			cout<<"\nDefault B class constructor called";
		}
		void minus(int a,int b){
			cout<<"\nMinus is"<<a-b;
		}
};
class C:public A,public B{
	public:
		C(){
			cout<<"\nDefault C class constructor called";
		}
		void dispData(int p,int q){
			add(p,q);
			minus(p,q);
		}
};
main(){
	
	C obj;
	obj.add(200,45);
	obj.minus(100,50);
}
