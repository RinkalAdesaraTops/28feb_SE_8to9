#include<stdio.h>
main(){
	int m1,m2,m3,total;
	float per;
	printf("\n Enter 3 marks");
	scanf("%d %d %d",&m1,&m2,&m3);
	total = m1+m2+m3;
	per = (float)total/3;
	printf("\n Total is %d",total);
	printf("\n Percentage is %.2f",per);
	if(per>=80){
		printf("\n Grade A+");
	} else if(per>=70 && per<80){
		printf("\n Grade A");
	} 
	else if(per>=60 && per<70){
		printf("\n Grade B");
	} 
	else if(per>=50 && per<60){
		printf("\n Grade C");
	}
	else if(per>=40 && per<50){
		printf("\n Pass");
	}  
	else {
		printf("\n Fail....Better Luck next time...!!!");
	}
}
