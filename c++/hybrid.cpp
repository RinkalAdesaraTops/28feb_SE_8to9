#include<iostream>
//polymorphism -- one nAMe multiple form
//run time -  dynamic binding method overiding
//compile time - static binding
//method overriding
using namespace std;
class A{
	public:
		virtual void disp(){
			cout<<"\n Disp - A called..";
		}
		virtual void add() = 0;
		
};
class B:public A{
	public:
		virtual void disp(){
			cout<<"\n Disp - B called..";
		}
		virtual void add(){
			cout<<"\n Add function called...";
		}
};
class C:public A{
	public:
		virtual void disp(){
			cout<<"\n Disp - C called..";
		}
};
class D:public B,public C{
	public:
		void disp(){
			cout<<"\n Disp - D called..";	
		}
};
main(){
////	D obj;
//	A obj1;
////	obj.disp();
	B obj2;
////	A::obj.disp();
//	obj1.A::disp();	
	obj2.add();
}
