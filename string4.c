//i am using pointers.
int stringcompare(char *a,char *b)  
{  
   int flag=0;  
    while(*a!='\0' && *b!='\0')  // while loop  
    {  
        if(*a!=*b)  
        {  
            flag=1;  
        }  
        a++;  
        b++;  
    }  
      
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}