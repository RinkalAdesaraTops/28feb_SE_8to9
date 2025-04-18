#include<stdio.h>
main(){
	char str[50];
	printf("Enter name:");
//	scanf("%s",str);
	gets(str);
	//printf("\n Your name is %s",str);
	printf("\n Name is ");
	puts(str);
}
