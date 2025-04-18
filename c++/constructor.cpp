#include<iostream>
using namespace std;
//constructor -- special member function
//when object is created, it will automatically called..
//its name is same as class name
//it always declare in public section
class Student{
	public:
		int std_id,m1,m2,m3,total;
		float per;
		char std_name[30];
		//default constructor
		Student(){
			cout<<"\n default Constructor called...";
		}
		Student(int a,int b,int c){
			cout<<"\n Parameterized Constructor called...";
			this->m1 = a;
			this->m2 =b;
			this->m3 = c;
		}
		void getPercentage(){
			total = m1+m2+m3;
			cout<<"\n Total is "<<total;
			
		}
		
};
main(){
	Student s1;
	Student s2(35,45,55);
	s2.getPercentage();
}
