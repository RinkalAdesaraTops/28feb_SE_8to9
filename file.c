//file write mode
#include<stdio.h>
main(){
	int no;
	char str[20];
	FILE *fp;
	fp = fopen("abc.txt","w");	
	printf("Enter no ");
	scanf("%d",&no);
	fprintf(fp,"No is -- %d",no);
	fclose(fp);	
}
