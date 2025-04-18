#include<iostream>
using namespace std;
class Abc{
	private:
		int a;
		friend int cube(Abc);
	public:
		Abc() : a(1) {}
};
int cube(Abc obj){
	obj.a = obj.a*3;
	return obj.a;
}
main(){
	Abc a1;
	cout<<"\n Cube is -- "<<cube(a1);
}
