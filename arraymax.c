#include<stdio.h>
main(){
	int a[50],i,j,n,max,min;
	printf("\n Enter size of array:");
	scanf("%d",&n);
	printf("\n Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max = a[0]; //max = 23 max = 34
	min = a[0]; 
	for(i=0;i<n;i++){ //23 21 34 4 56 
		if(a[i]>max){ //23>23 21>23 34>23 4>34 56>34
			max = a[i]; //max = 56
		}
		if(a[i]<min){ //23>23 21>23 34>23 4>34 56>34
			min = a[i]; //max = 56
		}	
	}
	printf("\n Maximum element is %d",max);
	printf("\n Minimum element is %d",min);
}
