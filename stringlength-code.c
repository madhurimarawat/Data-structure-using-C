#include<stdio.h>
#include<string.h>
void main(){
char i,str[100];
int l=0;
 printf("Enter a string:");
gets(str);
for(i=0;str[i]!='\0';++i){
l++;
}
 printf("Entered string %s length is: %d",str,l);
}