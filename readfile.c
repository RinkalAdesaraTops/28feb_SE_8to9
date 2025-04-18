//file read mode
//no value read
//paragraph read
#include<stdio.h>
main(){
	int no;
	char str[100];
	FILE *fp;
	fp = fopen("abc.txt","r");	
//	fscanf(fp,"%s",str);
	fgets(str,100,fp);
//	fscanf(fp,"%d",&no);
//	printf("No is ---  %d",no);
	printf("String is %s",str);
	fclose(fp);	
}
