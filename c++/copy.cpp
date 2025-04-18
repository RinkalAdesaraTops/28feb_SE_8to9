#include<iostream>
using namespace std;
class abc{
	int p,q;
	public:
	abc()
	{
		cout<<"\n Default called..";
	}
	abc(int a,int b)
	{
		p=a;
		q=b;
		cout<<"\n parameterized constructor called.";
	}
	abc(const abc &obj){ //refrence object
		p = obj.p;
		q = obj.q;
	}
	void disp(){
		cout<<"\n P is "<<p;
		cout<<"\n Q is "<<q;
	}
};
main(){
	abc a1;
	abc a2(15,25);
	abc a3(a2);
	a2.disp();
	a3.disp();
	
//	abc a3 = a2;
}
