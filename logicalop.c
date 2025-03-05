//logical operator - &&,||,!
//increment & decrement operator - ++,--
#include<stdio.h>
main(){
	int a,b,c;
	printf("\n Enter a & b & c:");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n a>b && a>c is %d",(a>b)&&(a>c));
	printf("\n a>b || a>c is %d",(a>b)||(a>c));
	printf("\n a>b is %d",(a>b));
	printf("\n !a>b is %d",!(a>b));
	printf("\n A is %d",a);//25
	b=a++; //26 postfix assign & then increment by 1
	printf("\n A is %d",a);
	printf("\n B is %d",b);
	b=++a;//27 prefix increment & then assign
	printf("\n A is %d",a);
	printf("\n B is %d",b);
//	printf("\n Enter b:");
//	scanf("%d",&b);
//	printf("\n Enter c:");
//	scanf("%d",&c);
}
