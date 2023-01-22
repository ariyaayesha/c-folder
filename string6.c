#include<stdio.h>
#include<string.h>

int main(){

char name[30];
int count=0,i=0;

gets(name);
while(name[i]!='\0'){
count++;
i++;

}
printf("%s\n",name);
printf("%d",count);
}
    