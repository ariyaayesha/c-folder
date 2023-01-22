
#include<stdio.h>

void main(){

int mark[5],i;
float sum=0,avarage ;

for(i=0;i<5;i++){
scanf("%d",&mark[i]);
}

for(i=0;i<5;i++){

sum=sum+mark[i];
}
avarage=sum/5;

printf("%f\n",sum);
printf("%f\n",avarage );


}