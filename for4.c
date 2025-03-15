#include<stdio.h>
main(){
	int i,j,k=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(j<=i){
				printf("%d ",k++);
			}
				
		}
		printf("\n");
		
	}
}
