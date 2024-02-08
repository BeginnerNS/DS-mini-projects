//Hotel management System using Queue
#include<stdio.h>
#include<string.h>
#define SIZE 5
struct hotel{
int h[SIZE];
char status[SIZE];
int front,rear;
char name;
int number;
int roomno;
};
typedef struct hotel QUEUE;
QUEUE q;
// Check if the queue is full
int isFull() {
 if ((q.front == q.rear + 2) || (q.front == 1 && q.rear == SIZE-1)) return 
1;
 return 0;
}
// Check if the queue is empty
int isEmpty() {
 if (q.front == 0 ) {return 1;}
 else{
 return 0;}
}
// Adding an element
void enQueue() {
 if (isFull())
printf("\nRooms are full!! \n");
 else {
if (q.front == 0 ) q.front = 1;
q.rear = (q.rear + 1) % SIZE;
printf("\nRoom is booked\n");
 
 }
 //printf("\nfront--> %d\n",q.front);
 //printf("rear--> %d\n",q.rear);
}
// Removing an element
int deQueue() {
 int element;
 if (isEmpty()) {
printf("\nNo rooms filled !! \n");
return (1);
 //printf("\nfront--> %d\n",q.front);
 //printf("rear--> %d\n",q.rear);
 }
 else
 {
element = q.h[q.front];
 
// Q has only one element, so we reset the
// queue after dequeing it
 if(q.front == 4){
 q.front = 1;
}
else {
 q.front = (q.front + 1) % SIZE;
 //printf("\nfront--> %d\n",q.front);
 //printf("rear--> %d\n",q.rear);
 printf("\nRoom cleared out\n");
}
return (element);
 }
}
// Display the queue
void display() {
 int p = 0;
 int i;
 if (isEmpty())
printf(" \nNo rooms filled!!!\n");
 else {
if(q.front == q.rear){
 printf("Room no - %d - filled ",q.front);
}
 else if(q.front < q.rear){
for (i = q.front; i < q.rear; i = (i + 1) % SIZE) {
 printf("Room no - %d - %s\n", i,"filled\n");
}
 
 printf("Room no - %d - %s\n", i,"filled\n");
 }
else{
 for(int y = q.front;y!=q.rear+1;y = (y+1)%SIZE){
 if(y==0||p==1){
 int l = y;
 l++;
 printf("Room no - %d - %s\n", l,"filled");
 p = 1;
 }
 else{
 printf("Room no - %d - %s\n", y,"filled\n");}
 }
}
 //printf("\nfront--> %d\n",q.front);
 //printf("rear--> %d\n",q.rear);
 }
}
void displayfile() {
 int p = 0;
 int i;
 FILE*fp;
 fp=fopen("print.txt","w");
 if (isEmpty())
fprintf(fp," \nNo rooms filled!!!\n");
 else {
if(q.front == q.rear){
 fprintf(fp,"Room no - %d - filled ",q.front);
}
 else if(q.front < q.rear){
for (i = q.front; i < q.rear; i = (i + 1) % SIZE) {
 fprintf(fp,"Room no - %d - %s\n", i,"filled\n");
}
 
 fprintf(fp,"Room no - %d - %s\n", i,"filled\n");
 }
else{
 for(int y = q.front;y!=q.rear+1;y = (y+1)%SIZE){
 if(y==0||p==1){
 int l = y;
 l++;
 fprintf(fp,"Room no - %d - %s\n", l,"filled");
 p = 1;
 }
 else{
 fprintf(fp,"Room no - %d - %s\n", y,"filled\n");}
 }
}
 //printf("\nfront--> %d\n",q.front);
 //printf("rear--> %d\n",q.rear);
 }
}
int main(){
struct hotel q;
q.front=-1;
q.rear=-1;
int c,i,j,flag = 1;
int rooms[100] = {1,2,3,4,5};
const char *t = "filled";
const char *tt = "empty";
int e = 1;
 
for(int r = 0; r <5;r++){
 q.h[r] = e;
 e++;
}
 
while(flag==1){
 printf("1.View current status of rooms\n2.Book a room \n3.Clear 
out a room\n4.Exit and print details in file\n");
 scanf("%d",&c);
 switch(c){ // using switch-case to alternate between the choices in 
the menu
 case 1:
 { display();
 w:
 printf("Enter 1 to RETURN to the menu , Enter 0 to EXIT -
");
 scanf("%d",&flag);
 if(flag==0){
 break;
 }
 
 else if(flag!=0 && flag!=1)
 {
 printf("Invalid choice,Enter again! \n");
 goto w;
 }
 }
 break; 
 case 2:
 { enQueue();
 tt:
 printf("Enter 1 to RETURN to the menu , Enter 0 to EXIT -
");
 scanf("%d",&flag);
 if(flag==0){
 break;
 }
 else if (flag !=0 && flag !=1){
 printf("Invalid choice, Please enter correctly\n");
 goto tt;
 }
 
 }
 
 break; 
 case 3:
 { 
 deQueue();
 ff:
 printf("Enter 1 to RETURN to the menu , Enter 0 to EXIT -
");
 scanf("%d",&flag);
 if(flag==0){
 break;
 }
 else if(flag!=0 && flag!=1)
 {
 printf("Invalid choice, Please enter correctly\n");
 goto ff;
 }
 
 
 }
 break;
 case 4:
 {
 printf("Goodbye");
 displayfile();
 flag=0;
 break;
 }
 break;
 default:{
 printf("Invalid Choice,Please enter from available choice 
\n");
 break;
 }
 
 }
}
}
