#include<stdio.h>

 int main() { 
	 
double  meal_cost;
int tip_cost;
int tax_cost;
float total_cost=0;

scanf("lf",&meal_cost);
scanf("%d",&tip_cost);
scanf("%d",&tax_cost);

total_cost=((meal_cost*tip_cost)/100)+((meal_cost*tax_cost)/100);
int round_cost;
round_cost=total_cost;

float difference = total_cost - round_cost;

if(difference >=0.5){
round_cost ++;
printf("%d",round_cost);

}else {
printf("%d",round_cost);

}
return 0;
 }


    