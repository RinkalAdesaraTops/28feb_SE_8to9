#include<iostream>
using namespace std;
class A{
//	private:
//		int a,b;
	protected:
		int a,b;
	public:
		A(){
			cout<<"\nDefault A class constructor called";
		}
		void add(int x,int y){
			a=x;
			b=y;
		}
	
};
class B : protected A{
	public:
		B(){
			cout<<"\nDefault B class constructor called";
		}
	
	void addition(){
		add(34,45);
		cout<<"\n Addition is "<<a+b;
	}
	
};
class C : protected B{
	public:
		C(){
			cout<<"\nDefault C class constructor called";	
		}
		void dispData(){
			addition();
		}
};
main(){
	C obj;
	obj.dispData();
}
