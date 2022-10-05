#include<stdio.h>
#include<stdlib.h>
/*Create a menu driven program to insert, display, and delete elements using arrays. 
Insertion and deletion has three possible cases: (i) insertion at beginning, 
(ii) insertion at the end,and (iii) insertion in the middle. 
Finally, include the already coded linear search and binary search functions in the menu.*/
void display(int *a,int n){
printf("Array is:\t");
for(int i=0;i<n;i++){
           	   printf("%d\t ",*(a+i));
} printf("\n");}
int insert(int *arr,int n,int in,int e){
if(in<n){
arr=realloc(arr,n+1);
 for(int i=n+1;i>=in;i--){
arr[i]=arr[i-1];}
arr[in]=e;
display(arr,n+1);return 1;} 
else if(in==n){arr=realloc(arr,n+1); arr[in]=e; display(arr,n+1);return 1;}
else {printf("Invalid index");return 0;}}
int delete(int *arr,int n,int in){
if(in<n){
for(int i=in;i<=n;i++){
 arr[i]=arr[i+1];}//arr=realloc(arr,n-1);
display(arr,n-1);return 1;} else{ printf("Invalid index");return 0;}}
int linearsearch(int *a,int ele,int key){
  if(ele==0 && a[ele]!=key) return -1;
  if (a[ele-1]==key) return ele-1;
  return linearsearch(a,ele-1,key);
}
int binarysearch(int *a,int start,int end,int key){
  if(start>end) return -1;
int mid=(start+end)/2;
if(a[mid]==key){
return mid;}
else if (a[mid]>key){
 return binarysearch(a,start,mid-1,key);}
else{return binarysearch(a,mid+1,end,key);}}
int choice(int *arr,int n){
int c,e,in,key;
printf("Enter 1 for insertion, 2 for Deletion, 3 for display,4 for linear search(Unsorted array),5 for binarysearch(Sorted array): ");
scanf("%d",&c);
switch(c){
case 1: 
printf("Enter index to insert:");
scanf("%d",&in);
printf("Enter element to insert:");
scanf("%d",&e);
if(insert(arr,n,in-1,e)==1){
return n+1; break;}else{return n; break;}
case 2:
printf("Enter index to delete:");
scanf("%d",&in);
if(delete(arr,n,in-1)==1){
return n-1; break;}else{return n; break;}
case 3:
display(arr,n);
return n; break;
case 4:
printf("Enter key to find:");
scanf("%d",&key);
int pos=linearsearch(arr,n,key);
 if(pos!=-1){
printf("Element found at: %d",pos+1);}
else {printf("Element not found");} 
return n; break;
case 5:
printf("Enter key to find:");
scanf("%d",&key);
int pos2=binarysearch(arr,0,n,key);
 if(pos2!=-1){
printf("Element found at: %d",pos2+1);}
else{ printf("Element not found");} 
return n; break;
default:
printf("Invalid case!!"); return -1; 
} }
int main(){
 int *arr; 
int n,c,test=1,e; 
printf("Enter number of members in array:");
scanf("%d",&n);
arr=calloc(n,sizeof(int));
for(int i=0;i<n;i++){
printf("Enter element %d: ",i+1);
scanf("%d",&arr[i]);
}
int size=choice(arr,n);
//while(test==1){
//for(int i=0;i<n;i++){
//if(test==1){
do{
printf("\nIf you want to repeat Enter 1 else Enter 2:");
scanf("%d",&test);
if(test==1){int e=choice(arr,size);
if(e==n+1){size++;}
else if(e==n-1){size--;} else if(e==(-1)){break;} else{size=n;}}
else{
free(arr); }}while(test==1);
return 0; }