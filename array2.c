#include<stdio.h>
main(){
	int a[50],i,n,sum=0;
	printf("\n ENter size of array:");
	scanf("%d",&n);
	printf("\n Enter elements:");
	for(i=0;i<n;i++){
//		printf("\n ENter element %d --- ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Entered Elements are \n");
	for(i=0;i<n;i++){
		sum += a[i];
		printf("%d ",a[i]);
	}
	printf("\n Sum of elements are %d",sum);
}
