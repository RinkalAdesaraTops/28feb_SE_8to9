//Armstrong no -- 153
//1^3 5^3 3^3
//1+125+27 = 153
#include<stdio.h>
void checkArmstrongNo(int no){
	int r,sum=0,f;
	f=no;
	while(no>0){ //15>0 1>0
		r = no%10; //153%10 = 3 15%10=5 1%10 = 1
		sum = sum +(r*r*r); //sum = 0+27 = 27 27+125=152 152+1 = 153
		no=no/10; //153/10=15  15/10=1 1/10=0.1 =0
	}
	if(sum == f){
		printf("\n It is Armstrong no");
	} else {
		printf("\n It is not Armstrong no");
	}
}
main(){
	int n;
	printf("\n Enter n:");
	scanf("%d",&n);
	checkArmstrongNo(n);
}

//calc - add,minus,multiply,division
