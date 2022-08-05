#include<stdio.h>
#include<stdlib.h>
/* Write the function for quick sort using C.*/
int pivot(int *a, int first, int last);
void swap(int a, int b) {
  int temp = a;  
  a = b;
  b = temp;
}
void quickSort( int *a, int first, int last) {
  int pivotElement;    
  if(first < last)  {
    pivotElement = pivot(a, first, last);
    quickSort(a, first, pivotElement-1);
    quickSort(a, pivotElement+1, last); }
}
int pivot(int *a, int first, int last){
  int p = first;
  int pivotElement = a[first];
  for(int i = first+1 ; i <= last ; i++){
    if(a[i] <= pivotElement){
      p++;
      //swap(a[i], a[p]);
 int temp = a[i];  
  a[i] = a[p];
  a[p]= temp;  
    }
  }
 // swap(a[p], a[first]);
int  temp = a[p];  
  a[p] = a[first];
  a[first]= temp;
  return p;
}

void main(){
int *arr,n,i;
printf("Enter number of elements: ");
scanf("%d",&n);
arr= (int*)calloc(n,sizeof(int));
for(i=0;i<n;i++){
printf("Enter element %d: ",i+1);
scanf("%d",&arr[i]);
}
printf("Sorted array is: ");
quickSort (arr,0,n-1);
for(i=0;i<n;i++){
           	   printf("%d\t ",arr[i]);
}
}