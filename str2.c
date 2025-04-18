#include<stdio.h>
struct emp{
	int no;
	char name[20];
}
//}s1,s2;
main(){
	struct emp s1;
	printf("\n Enter no:");	
	scanf("%d",&s1.no);
	printf("\n Enter name:");
	fflush(stdin);
	gets(s1.name);
//	s1.no = 101;
	printf("No is %d",s1.no);
//	strcpy(s1.name,"Hello");
	printf("\n Name is %s",s1.name);
}
