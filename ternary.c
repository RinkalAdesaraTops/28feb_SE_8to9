//>18 -- eligible for vote otherwise not 
#include<stdio.h>
main(){
	//ternary operator - ?:
	int a;
	printf("Enter a:");
	scanf("%d",&a);
//	(condition)?trueblock:false block
	(a>=18)?printf("Eligible 4 vote"):printf("Not Eligible 4 vote");
}
