#include<stdio.h>
#include<stdlib.h>
int n,i,el;
struct Queue* ptr;
/*7. Implement Queue data structure and associated
using linked list Design a menu for using the 
operations.*/
struct Queue{
int data;
struct Queue *next;};
struct Queue *head;
void display(struct Queue* Node){
printf("Queue is:\t");
while(Node!=NULL){
printf("%d\t",Node->data);
Node=Node->next;}printf("\n");}
void Enqueue(int e){
struct Queue* new=(struct Queue*)malloc(sizeof(struct Queue));
new->data=e;
if(head==NULL){head=new;
new->next=NULL;}
else if(head->next==NULL){
head->next=new;
new->next=NULL;}
else {
ptr=head;
while(ptr->next!=NULL){ptr=ptr->next;}
ptr->next=new;
new->next=NULL;}
 display(head);}
void Dequeue(){
if(head==NULL){
printf("Queue is Empty");}
else if(head->next==NULL){
free(head); printf("only member of queue deleted");}
else{
ptr=head;
head=head->next; free(ptr); printf("Member of queue deleted");}
display(head);}
void isempty(){
if(head!=NULL){
printf("Queue is Not Empty");}
else {printf("Queue is Empty");}}
void isfull(){
struct Queue* new=(struct Queue*)malloc(sizeof(struct Queue));
if(new==NULL){
printf("Queue is  Full");}
else {printf("Queue is Not Full");}
}
void rear(){
while(ptr->next!=NULL){ptr=ptr->next;}
printf("%d",ptr->data);}
void size(int t){
printf("The size of Queue is:%d",t);}
void front(){
printf("%d",head->data);}
void choice(){
int c,e;
printf("Enter 1 for Enqueue, 2 for Dequeue, 3 for front , 4 for rear,5 for is empty ,6 for is full or 7 for size: ");
scanf("%d",&c);
switch(c){
case 1: 
printf("Enter element to add in Queue:");
scanf("%d",&e); Enqueue(e);
break;
case 2:
Dequeue();
break;
case 3:
front();
 break;
case 4:
rear();  break;
case 5:
isempty();  break;
case 6:
isfull();  break;
case 7:
size(n);  break;
default:
printf("Invalid case!!");} }
int main(){
printf("Enter number of members in Queue:");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter element %d: ",i+1);
scanf("%d",&el);
Enqueue(el);}
choice();
return 0; }