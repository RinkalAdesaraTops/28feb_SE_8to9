#include<stdio.h>
main(){
	int n,p,ans;
	printf("Enter no:");	
	scanf("%d",&n);
	printf("How many times you want to multiply:");	
	scanf("%d",&p);
	ans = powerFun(n,p);
	printf("%d ^ %d === %d",n,p,ans);
}
int powerFun(int no,int i){ //5,4 == 5*5*5*5
	int m = 1,j=1;
	while(j<=i){
		m = m*no;
		j++;
	}
	return m;
}
