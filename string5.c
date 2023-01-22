#include<stdio.h>
#include<string.h>

int main(){

char name[30];
int count;

gets(name);
count=strlen(name);
printf("%s\n",name);
printf("%d",count);
}
    