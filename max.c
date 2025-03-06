//find out maximum from 2 values
#include<stdio.h>
main(){
	//ternary operator - ?:
	int a,b;
	printf("Enter a & b:");
	scanf("%d %d",&a,&b);
//	(condition)?trueblock:false block
	(a>b)?printf("A is maximum"):printf("B is maximum");
}
