
#include<stdio.h>

void main(){

int a[5],i,even,odd;

for(i=0;i<5;i++){
scanf("%d",&a[i]);
}

for(i=0;i<5;i++){

if(a[i]%2==0)
even=even+1;
else
odd=odd+1;
}
printf("%d\n",even);
printf("%d\n",odd);
}