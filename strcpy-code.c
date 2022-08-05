#include<stdio.h>
#include<string.h>
void main(){
char i,str1[100],str2[100];
 printf("Enter a string:");
gets(str1);
strcpy(str2,str1);
 printf("Entered string is %s\nCopied str is %s",str1,str2);
}