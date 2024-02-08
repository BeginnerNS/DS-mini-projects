//Mailbook using Linked-List
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//Creating structure using linked-list
typedef struct mailbook node;
struct mailbook{
char name[50];
char email[50]; //creating array
node* next;
};
void add(node** head){ // adding an email
node* temp=(node*)malloc(sizeof(node));
printf("Name of the contact: ");
scanf("%s",temp->name);
printf("\nEmail of the contact: ");
scanf("%s",temp->email);
temp->next=NULL;
 if(*head==NULL){
 *head=temp;
 printf("\nYour email is added!");
 }
 else{
 node* t= *head;
 while(t->next!=NULL){
 t=t->next;
 }
 t->next=temp;
 }
}
void Search(node*head){ //adding a search funtion
char tofind[50];
if(head==NULL){
 printf("\nEmpty Mailbook");
}
else{
 printf("\nEnter contact name to find the email: "); //if you will 
enter just the first name it will search
 scanf("%s",tofind);
 node*t=head;
 while(t!=NULL){
 if(strcmp((t->name),tofind)==0){
 printf("\nName of the contact: %s",t->name);
 printf("\nEmail of the contact: %s",t->email);
 return;
 }
 t=t->next;
 }
 printf("Contact not found, please verify the contact name again"); 
// Contact not in the mailbook
}
} 
void Delete(node** head){ // deleting an email from the mailbook
char todel[50];
 
if(*head ==NULL){
 printf("\nEmpty mailbook\n");
 
}
else{
 printf("\nEnter contact name to delete: ");
 scanf("%s",todel);
 if(strcmp(((*head)->name),todel)==0){
 node *t=*head;
 *head=(*head)->next;
 free(t);
 printf("\nThis contact is deleted"); //deleting process completed
 }
 else{
 node*t=*head;
 while(t->next !=NULL){
 if(strcmp((t->name),todel)==0){
 t->next=t->next->next;
 
 }
 t=t->next;
 }
 printf("\nContact does not exist in the mailbook"); // Contact 
absent in the mailbook
 }
}
}
void Display(node* head){ // Displaying the mailbook using file 
handling
FILE *fp;
fp=fopen("mailbook.txt","w");
if(head==NULL){
 fprintf(fp,"%s","Mailbook is empty. Add an email to display the 
mailbook."); //mail box is empty so no display
}
else{
 node*t= head;
 while(t !=NULL){
 fprintf(fp,"\nName of the contact:%s",t->name);
 fprintf(fp,"\nEmail of the contact:%s",t->email);
 t=t->next;
 }
}
fclose(fp);
}
void main(){ // intializing the main function
node *head=NULL;
int choice,flag=1;
printf("---------MAILBOOK----------");
// creating menu using switch case
while(flag==1){
 printf("\n1.Add an email\n2.Delete an email\n3.Find an 
email\n4.Exit and view all emails\n");
 scanf("%d",&choice);
 switch(choice){
 case 1:{
 add(&head);
 }
 break;
 case 2:{
 Delete(&head);
 }
 break;
 case 3:{
 Search(head);
 }
 break;
 case 4:{
 Display(head);
 printf("Goodbye!");
 flag=0;
 break;
 }
 break;
 default:printf("\nInvalid Choice");
 break;
 }
}
}
