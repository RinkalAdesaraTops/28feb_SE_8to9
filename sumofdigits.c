#include<stdio.h>
main(){
	int no,count=0,r,sum=0;
	printf("\n Enter no:");
	scanf("%d",&no);
	//no == 674 total digits -- 3
	//6 +7+ 4 sum of digits 
	while(no>0){ //674>0 67>0 6>0 0>0
		r = no%10; //674%10=4 67%10=7 6%10= 6
		no=no/10; //674/10=67.4 = 67 67/10=6.7=6 6/10=0.6 =0
		count++; //1 2 3
		sum = sum+r;
	}
	printf("\n No of digits are %d",count);
	printf("\n Sum of digits are %d",sum);
}
