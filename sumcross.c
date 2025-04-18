#include<stdio.h>
main(){
	int a[10][10],m,n,i,j,sum=0;
	printf("\n ENter row & column:");
	scanf("%d %d",&m,&n);
	printf("\n Enter elements: ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Entered element:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==j || (i+j==2)){
				sum += a[i][j];
			}
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Sum of cross diagonal is %d",sum);
	
}
