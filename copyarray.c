#include<stdio.h>
main(){
	int a[50],i,j,n,b[50];
	printf("\n Enter size of array:");
	scanf("%d",&n);
	printf("\n Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i] = a[i];
		//10=a
		//a=10
	}
	printf("\n Copied elements:");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);	
	}
}
