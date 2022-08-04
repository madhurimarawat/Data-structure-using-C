#include<stdio.h>
#include<stdlib.h>
int binarysearch(int *a,int start,int end,int key){
  if(start>end) return -1;
int mid=(start+end)/2;
if(a[mid]==key){
return mid;
}
else if (a[mid]>key){
  return binarysearch(a,start,mid-1,key);
}
else {
return binarysearch(a,mid+1,end,key);
}
}
void main(){
  int *arr,i, key,n;
printf("Enter number of elements:");
scanf("%d",&n);
arr=(int*)calloc(n,sizeof(int));
for( i=0;i<n;i++){
  printf("Element %d: ",i+1);
scanf("%d",&arr[i]);
}
printf("Enter key to find:");
scanf("%d",&key);
int pos=binarysearch(arr,0,n,key);
 if(pos!=-1)
printf("Element found at: %d",pos+1);
else 
printf("Element not found");
} 