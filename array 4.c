
#include<stdio.h>

void main(){

int a1[5],a2[5],sum[5],i;

for(i=0;i<5;i++){
scanf("%d",&a1[i]);
}

for(i=0;i<5;i++){

scanf("%d",&a2[i]);
}
for(i=0;i<5;i++){

sum[i]=a1[i]+a2[i];

printf("%d\n",sum[i]);

}
}