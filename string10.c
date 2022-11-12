#include <stdio.h>
#include <string.h>
 
 
int main()
{
    char s[1000],*p;  
    int alphabets=0,digits=0,specialcharacters=0;
 
    printf("Enter  the string: ");
    gets(s);
    
    p=s;
 
 	while(*p)  
    {
    	if( (*p>=65 && *p<=90) || (*p>=97 && *p<=122 ) )
          alphabets++;
        else if(*p>=48 && *p<=57)
         digits++;
        else
         specialcharacters++;
         
        p++; 
 	}
 	printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d", specialcharacters);
  
 	     
     
    
    
}