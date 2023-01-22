#include<stdio.h>
#include<string.h>
 int main() { 
	 

int l,i,j;
char c,s[100];


int value ;
gets(s);


l=strlen(s);

for(i=0,j=l-1;i<j;i++,j--){
c=s[i];
s[i]=s[j];
s[j]=c;

}
printf("%s",s);
 }


    