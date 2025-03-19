#include<stdio.h>
//4 types  
//1) TNRN -- Take nothing Return nothing
void add(); //function declaration
main(){
	printf("\n Main function called...");
	add(); //function calling...	
}
//function definition (coding-logic)
void add(){
	int a,b;
	printf("\n Enter a,b:");
	scanf("%d %d",&a,&b);
	printf("\n Addition is %d",a+b);
}
