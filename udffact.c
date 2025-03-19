#include<stdio.h>
//4) TSRS
int fact(int a){
	int m=1,i=1;
	while(a>=1){
		m =m*a;
		a--;
	}
	return m;
}
main(){
	int p;
	printf("\n Enter p:");
	scanf("%d",&p);
	printf("\n Factorial is %d",fact(p));	
}
//armstrong no
//even/odd
//prime no
//palindrom no

