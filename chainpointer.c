#include<stdio.h>
main(){
	int a,*p,**p1,***p2,****p3;
	a = 10;
	printf("\n A is %d",a);
	p = &a;
	printf("\n P is %d",*p);
	p1 = &p;
	printf("\n P1 is %d",**p1);
	p2 = &p1;
	printf("\n P2 is %d",***p2);
	p3 = &p2;
	printf("\n P1 is %d",****p3);	
	***p2 = 35;
	printf("\n A is %d",a);
	printf("\n P is %d",*p);
	printf("\n P1 is %d",**p1);
	printf("\n P2 is %d",***p2);
	printf("\n P1 is %d",****p3);
//	a=10,b=20 a=20 b=10
//	a=b; a=20
//	b=a; b=20
//t = a;
//a=b;b=t;
}
