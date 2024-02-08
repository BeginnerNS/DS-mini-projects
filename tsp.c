//Travelling Salesman Problem
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int adm[25][25],cost=0;
//structure
struct graph{
 int visitcities[10];
 int limit;
 
};
int tsp(int c,struct graph p)
{
 int count, nearest_city = 999;
 int minimum = 999, temp;
 for(count = 0; count < p.limit; count++){
 if((adm[c][count] != 0) && (p.visitcities[count] == 0)){
 if(adm[c][count] < minimum){
 minimum = adm[count][0] + adm[c][count];
 }
 temp = adm[c][count];
 nearest_city = count;
 }
 }
 if(minimum != 999){
 cost = cost + temp;
 }
 return nearest_city;
}
//finding cost for travel
int minimum_cost(int city,struct graph p)
{ 
 //File code
 FILE *fp;
 fp = fopen("cities.txt","a");
 
 int nearest_city;
 p.visitcities[city] = 1;
 printf("%d ", city + 1);
 fprintf(fp,"%d ", city + 1);
 nearest_city = tsp(city,p);
 if(nearest_city == 999){
 nearest_city = 0;
 printf("%d", nearest_city + 1);
 fprintf(fp,"%d", nearest_city + 1);
 cost = cost + adm[city][nearest_city];
 return cost;
 }
 minimum_cost(nearest_city,p);
}
int main()
{
 //int adm[25][25];
 struct graph p;
 // int cost=0;
 FILE *fp;
 fp = fopen("cities.txt","a");
 int i, j;
 printf("Enter Cities to Travel:\t");
 scanf("%d", &p.limit);
 printf("\nEnter Cost For Visiting Each City\n");
 for(i = 0; i < p.limit; i++)
 {
 printf("\nCity %d Cost:\n", p.limit,i+1);
 for(j = 0; j < p.limit; j++)
 {
 scanf("%d", &adm[i][j]);
 }
 p.visitcities[i] = 0;
 }
 printf("\nThe Graph in form of matrix\n");
 for(i = 0; i < p.limit; i++)
 {
 printf("\n");
 for(j = 0; j < p.limit; j++)
 {
 printf("%d ", adm[i][j]);
 }
 }
 printf("\n\nThe path:\t");
 minimum_cost(0,p);
 printf("\n\nMinimum Cost: \t");
 printf("%d\n", cost);
 fprintf(fp,"\n\nMinimum Cost: \t");
 fprintf(fp,"%d\n",cost);
 
 fprintf(fp,"\n\nPath:\t");
 fclose(fp);
 return 0;
}
