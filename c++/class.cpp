#include<iostream>
using namespace std;
class emp{
	//access specifier - public private protected
	public:
		int emp_id;
		char name[20];
	public:
		void getData();		
		void putData(){
			cout<<"Enter id:";
			cin>>emp_id;
			cout<<"Enter name:";
			cin>>name;			
		}
};
//scope resolution 
void emp :: getData(){
	cout<<"Name is "<<name<<endl;
	cout<<"Emp id is "<<emp_id;
}
main(){
	cout<<"Main function called...";
	emp e1;
	e1.putData();
	e1.getData();
}
