#include<stdio.h>
main(){
	/*
	1.addition 2.minus 3.multiplication 4.Division
	*/
	int a,b;
	char ch;
	printf("\n Enter a,b:");
	scanf("%d %d",&a,&b);
	printf("+.addition\n-.minus\n *.multiplication\n /.Division");
	printf("\n Plz Enter Your choice::");
	fflush(stdin);
	scanf("%c",&ch);
	
	switch(ch){
		case '+': printf("\n Addition is %d",a+b);
				break;
		case '-': printf("\n mINUS is %d",a-b);
				break;
		case '*': printf("\n Multiply is %d",a*b);
				break;
		case '/': printf("\n Division is %f",(float)a/b);
				break;
		default:printf("\n Invalid Choice.... ");
				break;
	}
	
}
