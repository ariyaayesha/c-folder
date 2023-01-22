#include<stdio.h>
 int main() { 
	 char ch; 
	  printf("Please enter a character: "); 
	 scanf("%c", &ch); 	
 if(ch>='0' && ch<='9') 	 { 	
 	printf(" %c is Digit.", ch);
 	 } 	 
else 	
 { 	 	
printf(" %c is Not Digit.", ch);
 	 } 	 
return 0;
 }


    