//Max from 3 values
//max from 4 variables
#include<stdio.h>
main(){
	int a,b,c;
	printf("\n ENter a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("\n A is maximum");
	} else if(b>a && b>c){
		printf("\n B is maximum");
	} else {
		printf("\n C is maximum");
	}
}
