//Departmental Store using structure
#include<stdio.h>
#include<string.h>
#define MAXSIZE 100
struct departstore{
int bill;
 
int cost[100];
char items[100];
int choice;
char *name;
};
void fruit(int *total_cost,int * fg_cost,int *u,int *arrf,int *q)
{
int m,k=1;
 
printf("\n1.Mango \n2.Orange \n3.Apple \n4.Pineapple");
while(k==1)
{
printf("\nEnter Item Number: ");
scanf("%d",&m);
 
 if (m==1)
{ *u+=1;
 arrf[*q] = 0;
 *q+=1;
 printf("\nYou chose Mango and the cost of Mango is RS.100");
 *total_cost+=fg_cost[m-1];
 printf("\nCurrent cart amount %d", *total_cost);
 
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==2)
{ *u+=1;
 arrf[*q] = 1;
 *q+=1;
 printf("\nYou chose Orange and the cost of Orange is RS.80");
 *total_cost+=fg_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==3)
{ *u+=1;
 arrf[*q] = 2;
 *q+=1;
 printf("\nYou chose Apple and the cost of Apple is RS.150");
 *total_cost+=fg_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==4)
{ *u+=1;
 arrf[*q] = 3;
 *q+=1;
 printf("\nYou chose Pineapple and the cost of Pineapple is 
RS.200");
 *total_cost+=fg_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
}
}
void electronics(int *total_cost,int * ele_cost, int *u, int *p1,int *arrco)
{
int m,k=1;
printf("\n1.Macbook AIR 512 \n2.HP Omen \n3.Oneplus 10T 
\n4.Xiamoi M10 \n5.Boat Airdopes \n6.Iphone 14 ");
while(k==1)
{
printf("\nEnter Item Number:");
scanf("%d",&m);
 
 if (m==1)
{ *u+=1;
 arrco[*p1] = 0;
 *p1+=1;
 printf("\nYou chose MACBOOK AIR 512 and the cost of 
MACBOOK AIR 512 is RS.100000");
 *total_cost+=ele_cost[m-1];
 printf("\nCurrent cart amount %d", *total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==2)
{ *u+=1;
 arrco[*p1] = 1;
 *p1+=1;
 printf("\nYou chose HP Omen and the cost of HP Omen is 
RS.80000");
 *total_cost+=ele_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==3)
{ *u+=1;
 arrco[*p1] = 2;
 *p1+=1;
 printf("\nYou chose Oneplus 10T and the cost of Oneplus 10T is 
RS.50000");
 *total_cost+=ele_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==4)
{ *u+=1;
 arrco[*p1] = 3;
 *p1+=1;
 printf("\nYou chose Xiamoi M10 and the cost of Xiamoi M10 is 
RS.15000");
 *total_cost+=ele_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 
 if (k==0)
 {
 break;
 }
}
else if (m==5)
{ *u+=1;
 arrco[*p1] = 4;
 *p1+=1;
 printf("\nYou chose Boat Airdopes and the cost of Boat Airdopes 
is RS.5000");
 *total_cost+=ele_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 
 if (k==0)
 {
 break;
 }
}
else if (m==6)
{ *u+=1;
 arrco[*p1] = 5;
 *p1+=1;
 printf("\nYou chose Iphone 14 and the cost of Iphone 14 is 
RS.70000");
 *total_cost+=ele_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 
 if (k==0)
 {
 break;
 }
}
 
}
 
}
void med(int *total_cost,int * med_cost, int *u,int *p2,int *arrm)
{ 
int m,k=1;
printf("\n1.Paracetamol,\n2.Antacid,\n3.Inhaler,\n4.Bandages,\n5.S
unscreen");
while(k==1)
{
printf("\nEnter Item Number: ");
scanf("%d",&m);
 
 if (m==1)
{ *u+=1;
 arrm[*p2] = 0;
 *p2+=1;
 printf("\nYou chose Paracetamol and the cost of Paracetamol is 
RS.100");
 *total_cost+=med_cost[m-1];
 printf("\nCurrent cart amount %d", *total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==2)
{ *u+=1;
 arrm[*p2] = 1;
 *p2+=1;
 printf("\nYou chose Antacid and the cost of Antacid is RS.80");
 *total_cost+=med_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==3)
{ *u+=1;
 arrm[*p2] = 2;
 *p2+=1;
 printf("\nYou chose Inhaler and the cost of Inhaler is RS.30");
 *total_cost+=med_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==4)
{ *u+=1;
 arrm[*p2] = 3;
 *p2+=1;
 printf("\nYou chose Bandages and the cost of Bandages is 
RS.10");
 *total_cost+=med_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==5)
{ *u+=1;
 arrm[*p2] = 4;
 *p2+=1;
 printf("\nYou chose Sunscreen and the cost of Sunscreen is 
RS.200");
 *total_cost+=med_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
 
}
}
void clothes(int *total_cost,int * cl_cost, int *u,int *y,int *arrc)
{ 
int m,k=1;
printf("\n1.Shirt \n2.T-shirt \n3.Jeans \n4.Nike Shoes");
while(k==1)
{
printf("\nEnter Item Number: ");
scanf("%d",&m);
 
 if (m==1)
{ *u+=1;
 arrc[*y] = 0;
 *y+=1;
 printf("\nYou chose Shirt and the cost of Shirt is RS.1200");
 *total_cost+=cl_cost[m-1];
 printf("\nCurrent cart amount %d", *total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==2)
{ *u+=1;
 arrc[*y] = 1;
 *y+=1;
 printf("\nYou chose T-shirt and the cost of T-shirt is RS.750");
 *total_cost+=cl_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==3)
{ *u+=1;
 arrc[*y] = 2;
 *y+=1;
 printf("\nYou chose Jeans and the cost of Jeans is RS.1500");
 *total_cost+=cl_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0:");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==4)
{ *u+=1;
 arrc[*y] = 3;
 *y+=1;
 printf("\nYou chose Nike Shoes and the cost of Nike Shoes is 
RS.5000");
 *total_cost+=cl_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
}
 
}
void stationary(int *total_cost,int * st_cost,int *u,int *p,int *arrs)
{
int m,k=1;
printf("\n1.Doms Pens \n2.Classmate Geometry box \n3.Camlin 
Crayons \n4.Diary");
while(k==1)
{
printf("\nEnter Item Number: ");
scanf("%d",&m);
 
 if (m==1)
{ *u+=1;
 arrs[*p] = 0;
 *p+=1;
 printf("\nYou chose Doms pens and the cost of Doms pens is 
RS.100");
 *total_cost+=st_cost[m-1];
 printf("\nCurrent cart amount %d", *total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==2)
{ *u+=1;
 arrs[*p] = 1;
 *p+=1;
 printf("\nYou chose Classmate Geometry box and the cost of 
Classmate Geometry box is RS.80");
 *total_cost+=st_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==3)
{ *u+=1;
 arrs[*p] = 2;
 *p+=1;
 printf("\nYou chose Camlin Crayons and the cost of Camlin 
Crayons is RS.150");
 *total_cost+=st_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0:");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
else if (m==4)
{ *u+=1;
 arrs[*p] = 3;
 *p+=1;
 printf("\nYou chose Diary and the cost of Diary is RS.200");
 *total_cost+=st_cost[m-1];
 printf("\nCurrent cart amount %d",*total_cost);
 printf("\nENTER 1 if you wish to purchase more from this 
department , else ENTER 0: ");
 scanf("%d",&k);
 if (k==0)
 {
 break;
 }
}
}
 
}
void main(){
int i,j,t=1,c,total_cost=0;
struct departstore d1;
c=d1.choice;
char const* fg[4]={"Mango", "Orange", "Apple", "Pineapple"};
int fg_cost[4]={100, 80, 150, 200};
char const* 
departments[5]={"Fruits","Medicines","Electronics","Stationary","Cloth
es"};
char const* ele[6]={"MACBOOK AIR 512", "HP Omen", 
"Oneplus 10T", "Xiamoi M10","Boat Airdopes","Iphone 14"};
int ele_cost[6]={100000, 80000, 50000, 15000,5000,70000};
char const* medi[] = 
{"Paracetamol","Antacid","Inhaler","Bandages","Sunscreen"};
int med_cost[5] = {100,80,30,10,200};
char const* cl[5]={"Shirt", "T-shirt", "Jeans", "Nike Shoes",};
int cl_cost[4]={1200, 750, 1500, 5000};
char const* st[5]={"Doms Pens", "Classmate Geometry box", 
"Camlin Crayons", "Diary"};
int st_cost[5]={100, 80, 150, 200};
int u =0,q=0,w=0,r=0,g = 0,jj = 0;
int arrf[100];
int arrm[100];
int arrco[100];
int arrs[100];
int arrc[100];
 
printf("----Welcome to TEAM-2 Store----- \n");
printf("Enter your name: ");
scanf("%s",d1.name);
while(t==1)
{
 printf("Which department would you like to shop from:(1-5) \n");
for(i=0;i<5;i++){
 printf("%d. %s \n", i+1,departments[i]);
}
scanf("%d",&c);
switch(c)
{
 case 1:
 {
 printf("Items available in %s",departments[0]);
 fruit(&total_cost,fg_cost,&u,arrf,&q);
 printf("If you want to buy from other departments, ENTER 1 and 
if not ENTER 0 to procced for payment: ");
 scanf("%d",&t);
 if(t==0)
 {
 break;
 }
 }
 break;
 case 2:
 {
 printf("Items available in %s",departments[1]);
 med(&total_cost,med_cost,&u,&r,arrm);
 printf("If you want to buy from other departments, ENTER 1 and 
if not ENTER 0 to procced for payment: ");
 scanf("%d",&t);
 if(t==0)
 {
 break;
 }
 }
 break;
 case 3:
 {
 printf("Items available in %s",departments[2]);
 electronics(&total_cost,ele_cost,&u,&w,arrco);
 printf("If you want to buy from other departments, ENTER 1 and 
if not ENTER 0 to procced for payment: ");
 scanf("%d",&t);
 if(t==0)
 {
 break;
 }
 }
 break;
 case 4:
 {
 printf("Items available in %s",departments[3]);
 stationary(&total_cost,st_cost,&u,&g,arrs);
 printf("If you want to buy from other departments, ENTER 1 and 
if not ENTER 0 to procced for payment: ");
 scanf("%d",&t);
 if(t==0)
 {
 break;
 }
 }
 break;
 case 5:
 { 
 printf("Items available in %s",departments[4]);
 clothes(&total_cost,cl_cost,&u,&jj,arrc);
 printf("If you want to buy from other departments, ENTER 1 and 
if not ENTER 0 to procced for payment : ");
 scanf("%d",&t);
 if(t==0)
 {
 break;
 }
 }
 break;
}
}
printf("-------CHECKOUT-----\n");
printf("Total Items selected: %d",u);
printf("\n");
printf("%s CART ",d1.name);
 for(int x =0;x<q;x++){
 printf("%s\t %d\n",fg[arrf[x]],fg_cost[arrf[x]]);
 }
for(int x = 0;x<w;x++){
 printf("%s\t %d\n",ele[arrco[x]],ele_cost[arrco[x]]);
}
for(int x = 0;x<r;x++){
 printf("%s\t %d\n",medi[arrm[x]],med_cost[arrm[x]]);
}
for(int x = 0;x<jj;x++){
 printf("%s\t %d\n",cl[arrc[x]],cl_cost[arrc[x]]);
}
for(int x = 0;x<g;x++){
 printf("%s\t %d\n",st[arrs[x]],st_cost[arrs[x]]);
}
 
printf("---BILL AMOUNT-----");
printf("\n%d",total_cost);
printf("Thank you for shopping! Do Visit Again :) \n");
