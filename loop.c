//while loop -- entry controlled loop
#include<stdio.h>
main(){
	//while do_while & for loop
	int i=5,j=1,k;
	while(i>=1){ //1<=5
		printf("%d\n",i);
		i--;
	}
	//do_while loop -- exit controlled loop
	do{
		printf("%d\n",j);
		j++;
	} while(j<=5);
	for(k=10;k<=20;k+=2){
		printf("\n %d",k);
	}
}
