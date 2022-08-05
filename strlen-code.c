#include<stdio.h>
#include<string.h>
void main(){
char str[100];
int l;
 printf("Enter a string:");
gets(str);
l=strlen(str);
 printf("Entered string  length is: %d",l);
}