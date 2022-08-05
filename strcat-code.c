#include<stdio.h>
#include<string.h>
void main(){
char i,j,str1[100],str2[100];
 printf("Enter first string:");
gets(str1);
printf("Enter second string:");
gets(str2);
strcat(str1,str2);
 printf("Concatenated string is: %s",str1);
}