#include<stdio.h>
#include<string.h>

int main(){

char name[30];


scanf("%s",name);

printf("%.5s\n",name);
printf("%10.5s\n",name);
printf("%5s\n",name);

puts(name);
printf("%s\n",&name[2]);

}
    