#include<stdio.h>
#include<string.h>
void main(){
char str1[100];
char*str2;
int i,l,temp=0;
 printf("Enter a string:");
gets(str1);
l=strlen(str1);
str2=strrev(str1);
for(i=0;i<l;i++){
if(str1[i]!=str2[i]){
  temp=1;
}
}
if (temp==0){
printf("String is palindrome");
}
else{
printf("String is not palindrome");
}
}