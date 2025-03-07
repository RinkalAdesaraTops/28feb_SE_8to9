#include<stdio.h>
main(){
	/*
	1.addition 2.minus 3.multiplication 4.Division
	*/
	int a,b,ch;
	printf("\n Enter a,b:");
	scanf("%d %d",&a,&b);
	printf("1.addition\n2.minus\n 3.multiplication\n 4.Division");
	printf("\n Plz Enter Your choice::");
	scanf("%d",&ch);
	switch(ch){
		case 1: printf("\n Addition is %d",a+b);
				break;
		case 2: printf("\n mINUS is %d",a-b);
				break;
		case 3: printf("\n Multiply is %d",a*b);
				break;
		case 4: printf("\n Division is %f",(float)a/b);
				break;
		default:printf("\n Invalid Choice.... ");
				break;
	}
	
}
