#include<stdio.h>
union emp{
	int no;
	char name[20];
}
//}s1,s2;
main(){
	union emp s1;	
	s1.no = 101;
	
	strcpy(s1.name,"Hello");
	printf("No is %d",s1.no);
	printf("\n Name is %s",s1.name);
}
