#include<stdio.h>
main(){
	int a[10][10],m,n,i,j,sum=0,anti_sum=0;
	printf("\n ENter row & column:");
	scanf("%d %d",&m,&n);
	printf("\n Enter elements: ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Matrix is \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
			if(i==j){
				sum += a[i][j];
			}
			if(i+j == 2){
				anti_sum += a[i][j];
			}
		}
		printf("\n");
	}
	printf("\n Sum of diagonal element is %d",sum);
	printf("\n Sum of Anti diagonal element is %d",anti_sum);
}
