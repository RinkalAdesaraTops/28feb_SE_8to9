#include<stdio.h>
struct emp{
	int no;
	char name[20];
}
//}s1,s2;
main(){
	struct emp s1;	
	s1.no = 101;
	printf("No is %d",s1.no);
	strcpy(s1.name,"Hello");
	printf("\n Name is %s",s1.name);
}
