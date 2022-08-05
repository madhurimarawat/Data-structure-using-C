#include<stdio.h>
void main(){
char i,str1[100],str2[100];
 printf("Enter a string:");
gets(str1);
int l=0;
for(i=0;str1[i]!='\0';++i){
l++;
}
printf("Reversed str is:");
for(i=l-1;i>=0;i--){
 printf("%c",str1[i]);
}
}