#include<stdio.h>
main(){
	int i,j,a[50],b[50],merge_arr[50],m,n,total;
	printf("Enter size of array1");
	scanf("%d",&m);
	printf("\n Enter elements of array1 : ");
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter size of array2");
	scanf("%d",&n);
	printf("\n Enter elements of array2 : ");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	printf("\n Array1 : ");
	for(i=0;i<m;i++){
		merge_arr[i] = a[i];
		printf("%d ",a[i]);
	}
	printf("\n Array2 : ");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	total = m+n;
	for(i=m,j=0;i<total;i++,j++){
		merge_arr[i] = b[j];
	}
	printf("\n Merge Array is  : ");
	for(i=0;i<total;i++){
		printf("%d ",merge_arr[i]);
	}
}
