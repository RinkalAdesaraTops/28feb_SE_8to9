#include<stdio.h>
main(){
	int age;
	printf("\n Enter age:");
	scanf("%d",&age);
		
	if(age>=18){
		goto eligible;
	} else {
		goto noteligible;
	}
	eligible: 
			printf("\n Eligibe for vote");
			return 0;	
	noteligible : 
			printf("\n Not Eligibe for vote");
			return 0;
				
}
