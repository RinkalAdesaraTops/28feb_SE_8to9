//check even or odd
#include<stdio.h>
main(){
	//ternary operator - ?:
	int a;
	printf("Enter a:");
	scanf("%d",&a);
	(a%2==0)?printf("It is even no"):printf("It is odd no");
	//sizeof operator
	printf("\n int size is %d",sizeof(int));
	printf("\n float size is %d",sizeof(float));
	printf("\n char size is %d",sizeof(char));
	printf("\n short size is %d",sizeof(short));
	printf("\n double size is %d",sizeof(double));
	printf("\n long size is %d",sizeof(long));
}
