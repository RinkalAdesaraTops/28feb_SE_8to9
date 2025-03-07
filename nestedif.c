//Nested if
#include<stdio.h>
main(){
	int age;
	printf("\n Enter Age:");
	scanf("%d",&age);
	if(age>=18){
		printf("\n Eligble 4 vote");
		if(age>=65){
			printf("\n Eligble 4 Pension");
		}
	} else {
		printf("\n Not Eligble 4 vote");
	}
}
