//1d array
#include<stdio.h>
main(){
	int i,j,a[50],b[50],m;
	printf("Enter size of array1");
	scanf("%d",&m);
	printf("\n Enter elements of array1 : ");
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=m-1,j=0;i>=0;i--,j++){
		b[j] = a[i];
	}
	printf("\n Array1 : ");
	for(i=0;i<m;i++){
		printf("%d ",a[i]);
	}
	printf("\n Reverse Array : ");
	for(i=0;i<m;i++){
		printf("%d ",b[i]);
	}
}
