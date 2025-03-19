#include<stdio.h>
#define PI 3.14
//3) TSRN -- Take nothing Return something
float area(){
 	float r;
	printf("\n Enter radious:");
	scanf("%f",&r);
	return PI*r*r;

}
main(){
//	float ans;
//	ans = area();
//	printf("\n Area of circle is %.2f",ans);
	printf("\n Area of circle is %.2f",area());
}

