#include<stdio.h>
main(){
	int i=1;
	while(i<=5){
		
		if(i==3){
			continue;
		}
		printf("\n %d",i);
		i++;
	}
}
