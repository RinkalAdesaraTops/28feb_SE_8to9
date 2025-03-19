#include<stdio.h>
//2) TSRN -- Take something Return nothing
void minus(int p,int q){
 	printf("\n Minus is %d",p-q);
}
main(){
	int a,b;
	printf("\n Main function called...");
	printf("\n Enter a,b:");
	scanf("%d %d",&a,&b);
//	minus(35,15); //function calling...	
	minus(a,b);
}

