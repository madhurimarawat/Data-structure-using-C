#include<stdio.h>
#include<stdlib.h>
/*4. Implement Stack data structure and associated operations using arrays.
Design a menu for using the operations.*/
void print(int *a,int n){
printf("Stack is:\t");
for(int i=0;i<n;i++){
           	   printf("%d\t ",*(a+i));
} }
void push(int *arr,int n,int e){
arr=realloc(arr,n+1);
arr[n]=e;
print(arr,n+1);}
 void pop(int *arr,int n){
printf("%d\n",arr[n-1]);
arr=realloc(arr,n-1);
print(arr,n-1);}
void peek(int *arr,int n){
printf("%d",arr[n-1]);
   }
void size(int *arr,int n){
int l=0;
for(int i=0;i<n;i++){
l++;}
printf("The size of stack is:%d",l);}
int choice(int *arr,int n){
int c,e;
printf("Enter 1 for Push, 2 for Pop, 3 for Peek or 4 for Size: ");
scanf("%d",&c);
switch(c){
case 1: 
printf("Enter element to push:");
scanf("%d",&e);
push(arr,n,e);return n+1; break; 
case 2:
pop(arr,n); return n-1;break;
case 3:
peek(arr,n); break;
case 4:
size(arr,n); break;
default:
printf("Invalid case!!");
} }

int main(){
int *arr; 
int n,c,test;
printf("Enter number of members in stack:");
scanf("%d",&n);
arr=calloc(n,sizeof(int));
for(int i=0;i<n;i++){
printf("Enter element %d: ",i+1);
scanf("%d",&arr[i]);
}
int size=choice(arr,n);
printf("\nIf you want to repeat Enter 1 else Enter 2:");
scanf("%d",&test);
if(test==1){
choice(arr,size);}
else{
free(arr); }
return 0; }