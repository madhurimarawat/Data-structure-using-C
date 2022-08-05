#include<stdio.h>
#include<string.h>
void main(){
char str[100];
 printf("Enter a string:");
gets(str);
 printf("Reversed string is: %s",strrev(str));
}