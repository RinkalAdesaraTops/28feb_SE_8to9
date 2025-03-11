#include<stdio.h>
main(){
	//prime no -- 7 ,13,19,17
	int no,i=1,count=0;
	printf("\n Enter no:");
	scanf("%d",&no);
	while(i<=no){
		if(no%i==0){ //4%1 4%2 4%3 4%4 
			count++; //1 2 3
		}
		i++;
	}
	if(count==2){
		printf("\n It is prime no...");
	} else {
		printf("\n It is not prime no...");
	}
}
