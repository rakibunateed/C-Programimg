#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%d",&ch);

    if (ch >= 'a' || ch < 'z')
    {
       printf("This is a character.");
    }
    else if (ch >= 'A' || ch < 'Z')
    {
       printf("This is a character.");
    }
    
     else if (ch >=0 && ch <= 9)
     {
         printf("This is a digit.");
     }
    else
    {
        printf("this is a special character.");
    }
    
    
}