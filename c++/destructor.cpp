#include<iostream>
using namespace std;
class Counter{
	public:
		int a=1;
	public:
	Counter()
	{
		cout<<"\n Constructor called...";
		cout<<a;
	}
	Counter(int p)
	{
		cout<<"\n Parameter Constructor called...";
		a=p;
		cout<<a;
	}
	//tilde
	~Counter(){
		cout<<"\n Destructor called..."<<--a;
	}
};
main(){
	Counter c1,c3;
	Counter C2(100);
}
