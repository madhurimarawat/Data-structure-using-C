#include<stdio.h>
//#include<string.h>
int search(char src[], char str[]) {
   int i, j, f;
   i = 0, j = 0;
 
   while (src[i] != '\0') {
 
      while (src[i] != str[0] && src[i] != '\0')
         i++;
 
      if (src[i] == '\0')
         return (-1);
 
      f= i;
 
      while (src[i] == str[j] && src[i] != '\0' && str[j] != '\0') {
         i++;
         j++;
      }
 
      if (str[j] == '\0')
         return (f);
      if (src[i] == '\0')
         return (-1);
 
      i = f + 1;
      j = 0;
   }
}
void main(){
char str1[100],str2[100];
int i,l,temp=0;
 printf("Enter a string:");
gets(str1);
printf("Enter substring to check in string:");
gets(str2);
int sub=search(str1,str2);
if (sub==-1){
printf("String %s is not substring of %s.",str2,str1);
}
else{
printf("String %s is  substring of string %s .",str2,str1);
printf("\nSubstring %s found at location :%d",str2,sub+1);
}
}