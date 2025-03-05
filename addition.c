//Perform Arithmetic Operator - +,-,*,/,% - modulus - return reminder
//Assignment - shorthand operator-- +=,-=,*=,/=,%=
//relational operator - <,>,<=,>=,==,!=
#include<stdio.h>
main(){
	int a,b,c;
	printf("\n Enter a:");
	scanf("%d",&a);
	printf("\n Enter b:");
	scanf("%d",&b);
	c =a+b;
	printf("\nAddition is %d",c);
	printf("\nMinus is %d",b-a);
	printf("\nMultiply is %d",a*b);
	//Datatype conversion
	printf("\nDivision is %f",(float)a/b);
	printf("\n Modulus is %d",a%b);
//	a+=5; //a=a+5
	printf("\n A is %d",a);
	printf("\n A > b is %d",a>b);
	printf("\n A >= b is %d",a>=b);
	printf("\n A < b is %d",a<b);
	printf("\n A <= b is %d",a<=b);
	printf("\n A == b is %d",a==b);
	printf("\n A != b is %d",a!=b);
}
