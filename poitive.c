//no - +ve,-ve, zero
//elseif ladder
#include<stdio.h>
main(){
	int no;
	printf("Enter no:");
	scanf("%d",&no);
	if(no>0){
		printf("\n +ve no");
	} else if(no<0){
		printf("\n -ve no");
	} else {
		printf("\n Zero ");
	}
}
