#include<stdio.h>
main(){
	int a[10][10],i,j,m,n,sum=0;
	printf("\n ENter row & column:");
	scanf("%d %d",&m,&n);
	printf("\n Enter elements: ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Matrix is : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum = sum+a[i][j];
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Sum of all elements are %d",sum);
}
