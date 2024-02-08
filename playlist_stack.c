//Music Playlist organizer using Stack
#include<stdio.h>
#include<string.h>
#include <limits.h>
#include <stdbool.h>
#define MAXSIZE 100
//structure declaration
struct playlist
{
int top;
char* play[MAXSIZE];
};
typedef struct playlist STACK;
STACK s; // Defining Stack
// Introducing PUSH operation in stack
// This operation adds a song to the playlist
void Push(char *x,int *v){
int t = 0;
for(int y = 0;y<s.top;y++){
 if(strcmp(s.play[y],x) == 0){
 t = 1; 
 }
}
if(s.top==MAXSIZE-1){
 printf("Playlist is full");
}
 
else if(t == 0) {
 
 s.play[s.top]=x;
 s.top++;
 printf("Selected song has been added.\n");// Pushing the song in 
playlist
}
else if(t == 1){
 printf("Selected song is already present in playlist\n");
}
*v = s.top;
 
}
// Introducing POP operation in stack
// This function deletes a song from the playlist
void Pop(int *x,int *i,int arr1[],int *v){
char* arr2[5]={"Song1","Song2","Song3","Song4","Song5"}; // 
Array of songs
if(s.top==-1){
 printf("Playlist is empty"); //empty stack condition
}
else{
 int y = 0;
 printf("Deleted the song: %s\n",s.play[*x-1]);
 for(int o = 0;o<5;o++){
 if(strcmp(s.play[*x-1],arr2[o]) == 0){
 *i-=arr1[o];
 break;
 }
 }
 
 for(int i = 0;i<s.top;i++){
 if(s.play[i] == s.play[*x-1]){
 for(int k = i;k<s.top;k++){
 s.play[k] = s.play[k+1];
 }
 }
 }
 s.top--;
}
*v = s.top;
}
// Introducing SEARCH operation in stack
// This function searches song in the playlist
void search(char song[]){
int i , s1=0;
for(i = 0; i < s.top ; i++)
{
 if(strcmp(s.play[i],song)==0)
 {
 s1 = 1;
 }
 
}
if(s1 == 1){
 printf("This song is present\n "); // Searching the array of songs 
selected and display the comment
}
else{
 printf("This song not present\n");
}
}
// Introducing TRAVERSE operation in stack
// This function display the song present in our current playlist with it's 
duration
void traverse(int arr1[],int *p,int *a,int *b,int *c,int *d,int *e){
 
printf("%d Songs\n",s.top);
printf("--------------------------------------------\n");
if(s.top==0){
 printf("No songs present"); //empty playlist condition
}
else{
 
 for(int i=0;i<s.top;i++){
 printf("%d)%s Song Duration - ",i+1,s.play[i]);
 if (strcmp(s.play[i], "Song1")==0){
 printf("%d minutes\n",arr1[0]);
 if(*a == 0){
 *p+=arr1[0];
 *a = 1;
 }
 }
 else if(strcmp(s.play[i],"Song2")==0){
 printf("%d minutes\n",arr1[1]);
 if(*b == 0){
 *p+=arr1[1];
 *b = 1;
 }
 
 
 }
 else if(strcmp(s.play[i], "Song3")==0){
 printf("%d minutes\n",arr1[2]);
 if(*c == 0){
 *p+=arr1[2];
 *c = 1;
 }
 }
 else if(strcmp(s.play[i] ,"Song4")==0){
 printf("%d minutes\n",arr1[3]);
 if(*d == 0){
 *p+=arr1[3];
 *d = 1;
 }
 }
 else if(strcmp(s.play[i], "Song5")==0){
 printf("%d minutes\n",arr1[4]);
 if(*e == 0){
 *p+=arr1[4];
 *e = 1;
 }
 }
 }
 printf("\nTotal duration - %d minutes\n",*p); //Total duration of 
the playlist
}
} 
void main(){
 
//calling different functions according to user input
char* arr[5]={"Song1","Song2","Song3","Song4","Song5"};
int arr1[5] = {1,2,3,4,5};
int i,j,k,n,c,c1,c2,flag=1,c3,time1=0,y = 0,z = 0;
int a = 0,b = 0,p = 0,d = 0,e = 0,v = 0;
char song[100];
struct playlist s;
s.top=0;
while(flag==1){
 printf("Available functions for your PLAYLIST : \n1.View 
available songs\n2.Add a song to your playlist \n3.View your current 
playlist\n4.Delete a song from your playlist\n5.Search a 
song\n6.Exit\n");
 scanf("%d",&c);
 switch(c){ // using switch-case to alternate between the choices in 
the menu
 case 1:
 {
 printf("Available Songs :--\n"); // Songs available to add to 
the playlist
 for(i=0;i<5;i++){
 printf("%s \n",arr[i]);
 }
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
 { z = 0;
 while(z == 0)
 { rr:
 printf("Select a song:--\n");
 for(i=0;i<5;i++){
 printf("%d. %s \n",i+1,arr[i]);
 }
 scanf("%d",&c1);
 
 if(c1<6){
 Push(arr[c1-1],&v); // using push operation to add song
 }
 else{
 printf("Invalid choice, enter correctly\n");
 goto rr;
 }
 
 y = 0;
 while(y == 0)
 {
 printf("Do you wish to add any other song?? Enter 1 Else 0 
");
 scanf("%d",&c3);
 if (c3==0){
 y = 1;
 z = 1;
 }
 else if(c3==1){
 y = 1;
 z = 0;
 }
 else{
 printf("Invalid choice, Please enter correctly\n");
 }
 }}
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
 printf("Your current playlist: "); 
 traverse(arr1,&time1,&a,&b,&p,&d,&e); // using traverse 
operation to display playlist and duration of song
 q:
 printf("Enter 1 to RETURN to the menu , Enter 0 to EXIT -
");
 scanf("%d",&flag);
 if(flag==0){
 break;
 }
 else if(flag!=0 && flag!=1)
 {
 printf("Invalid choice, Please enter correctly : \n");
 goto q;
 }
 }
 break; 
 case 4:
 { 
 if(v==0){
 printf("Your playlist has no SONGS!\n");
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
 
 else{
 dd:
 printf("Which song do you want to remove from your 
playlist?\n");
 printf("Your current playlist: "); 
 traverse(arr1,&time1,&a,&b,&p,&d,&e); // using traverse 
operation to display playlist and duration of song
 scanf("%d",&c2);
 if(c2<=v)
 {
 Pop(&c2,&time1,arr1,&v); // Using pop operation to 
delete song
 }
 else{
 printf("\nInvalid choice, Please enter correctly\n");
 goto dd;
 }
 
 qq:
 printf("Enter 1 to RETURN to the menu , Enter 0 to EXIT -
");
 scanf("%d",&flag);
 if(flag==0){
 break;
 }
 else if(flag!=0 && flag!=1)
 {
 printf("Invalid choice, Please enter correctly\n");
 goto qq;
 }
 }
 
 
 }
 break;
 case 5:
 {
 printf("Enter a SONG NAME to search for it in your 
playlist."); 
 scanf("%s", song);
 search(song); // Using search operation to search a song
 jj:
 printf("Enter 1 to RETURN to the menu , Enter 0 to EXIT -
");
 scanf("%d",&flag);
 if(flag==0){
 break;
 }
 else if(flag!=0 && flag!=1)
 {
 printf("Invalid choice, Please enter correctly\n");
 goto jj;
 }
 
 }
 break; 
 case 6:
 {
 printf("Goodbye");
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
