#include<stdio.h>
#include<string.h>
void main(){
char i,j,str1[100],str2[100];
 printf("Enter first string:");
gets(str1);
printf("Enter second string:");
gets(str2);
for(i=0;str1[i]!='\0';++i);
for(j=0;str2[j]!='\0';++j,++i){
str1[i]=str2[j];
}
str1[i]='\0';
 printf("Concatenated string is %s",str1);
}