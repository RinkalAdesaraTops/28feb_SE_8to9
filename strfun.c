#include<stdio.h>
main(){
	char str[50],str1[50];
	int ans;
	printf("\n Enter string:");
	gets(str);
	printf("\n Enter string2:");
	gets(str1);
	printf("\n String length is %d",strlen(str));
	printf("\n String uppercase is %s",strupr(str));
	printf("\n String lowercase is %s",strlwr(str));
//	printf("\n String reverse is %s",strrev(str));
//	strcat(str,str1);
//	printf("\n Merge string is %s",str);
//	strcpy(str,"heelloooo");
//	printf("\n Copy string is %s",str);
	ans = strcmp(str,str1); //str >str1 =-1 +1
	printf("\n Comparision is %d",ans);
	//concat strcat compare strcmp copy strcpy
}
