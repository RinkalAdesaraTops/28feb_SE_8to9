#include<stdio.h>
main(){
	char str[50],str2[50],*p;
	int ans;
	printf("\n Enter str1");
	gets(str);
	printf("\n Enter str2");
	gets(str2);
	ans = strcmpi(str,str2);
//	printf("\n Answer is %d",ans);
	p = strchr(str, 'k');
	printf("\nPosition is %d", p - str + 1);
//    if (p != NULL) {
//        printf("\nPosition is %ld", p - str + 1);  // Index of 'k' in str
//    } else {
//        printf("\nCharacter 'k' not found.");
//    }
}
