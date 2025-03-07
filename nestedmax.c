//max from 3variable
//max from 4variable
#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter a,b,c:");	
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){ //a=34 b=120 c=44
		if(a>c){
			printf("\n A is max");
		} else {
			printf("\n C is max");
		}
	} else {
		if(b>c){
			printf("\n B is max");
		} else {
			printf("\n C is max");
		}	
	}
}
