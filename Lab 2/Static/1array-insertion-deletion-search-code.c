#include<stdio.h>
int array[100],n;
/*1. Create a menu driven program to insert, display, and delete
 elements using arrays. Insertion and deletion has three possible
 cases:(i) insertion at beginning, (ii) insertion at the end, and 
(iii) insertion in the middle. Finally, include the already 
coded linear search and binary search functions in the menu.*/
void display(int a[],int n){
printf("Array is:\t");
for(int i=0;i<n;i++){
           	   printf("%d\t ",a[i]);
} printf("\n");}
void insert(int arr[],int n,int in,int e){
if(in<n){
n++;
 for(int i=n+1;i>=in;i--){
arr[i]=arr[i-1];}
arr[in]=e;
display(arr,n);} 
else if(in==n){n++; arr[in]=e; display(arr,n);}
else {printf("Invalid index");}}
void delete(int arr[],int n,int in){
if(in<n){
for(int i=in;i<n-1;i++){
 arr[i]=arr[i+1];}n--;
display(arr,n);} else{ printf("Invalid index");}}
int linearsearch(int a[],int ele,int key){
  if(ele==0 && a[ele]!=key) return -1;
  if (a[ele-1]==key) return ele-1;
  return linearsearch(a,ele-1,key);
}
int binarysearch(int a[],int start,int end,int key){
  if(start>end) return -1;
int mid=(start+end)/2;
if(a[mid]==key){
return mid;}
else if (a[mid]>key){
 return binarysearch(a,start,mid-1,key);}
else{return binarysearch(a,mid+1,end,key);}}
void choice(int array[],int n){
int c,e,in,key;
printf("Enter 1 for insertion, 2 for Deletion, 3 for display,4 for linear search(Unsorted array),5 for binarysearch(Sorted array): ");
scanf("%d",&c);
switch(c){
case 1: 
printf("Enter index to insert:");
scanf("%d",&in);
printf("Enter element to insert:");
scanf("%d",&e);
insert(array,n,in-1,e);break;
case 2:
printf("Enter index to delete:");
scanf("%d",&in);
delete(array,n,in-1); break;
case 3:
display(array,n);
break;
case 4:
printf("Enter key to find:");
scanf("%d",&key);
int pos=linearsearch(array,n,key);
 if(pos!=-1){
printf("Element found at: %d",pos+1);}
else {printf("Element not found");} break;
case 5:
printf("Enter key to find:");
scanf("%d",&key);
int pos2=binarysearch(array,0,n,key);
 if(pos2!=-1){
printf("Element found at: %d",pos2+1);}
else{ printf("Element not found");}  break;
default:
printf("Invalid case!!");  
} }
int main(){
int n; 
printf("Enter number of members in array:");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter element %d: ",i+1);
scanf("%d",&array[i]);
}
choice(array,n);
}