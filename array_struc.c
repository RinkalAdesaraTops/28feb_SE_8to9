#include<stdio.h>
struct emp{
	int no;
	char name[20];
	struct emp_salary{
		int e_sal,month;
	}e1;
}s1[10],s2;

main(){
	int n,i;
	printf("\n Enter no of users");
	scanf("%d",&n); //3
	for(i=0;i<n;i++){
		printf("\n ENter no:");
		scanf("%d",&s1[i].no);
		printf("\n ENter name:");
		scanf("%s",s1[i].name);
	}
	printf("\n No \t Name \n");
	for(i=0;i<n;i++){
		printf(" %d \t %s \n",s1[i].no,s1[i].name);
	}
	
}
