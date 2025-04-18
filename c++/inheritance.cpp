#include<iostream>
using namespace std;
class abc{ //parent/ base/ super
	public:
		int p,q;
		abc(){
			cout<<"\nABC default constructor called..";
		}
		abc(int a,int b){
			cout<<"\nAddition is "<<a+b;
		}
		
};
class xyz : public abc{ //child /derived/ sub class
	public:
		xyz()
		{
			cout<<"\n xyz constructor called..";	
		}
		xyz(int a,int b){
			abc(a,b);
		}
		
};
main(){
	xyz x1;
	xyz x2(100,200);
}
