#include<stdio.h>
main(){
	int a[5] = {11,22,33,44,55},*p,i;
	p=&a;
	for(i=0;i<5;i++){
		printf("\n %d",*p);
		printf("\nAddress is %d",p);
		p++;
	}
}

