#include<stdio.h>
//5! -- 5*4*3*2*1
main(){
	int no,i=1,m=1;
	printf("Enter no:");
	scanf("%d",&no);
	while(no>=i){
		m *=no;
		no--;
	}
	printf("\n FACtorial is %d",m);
}
