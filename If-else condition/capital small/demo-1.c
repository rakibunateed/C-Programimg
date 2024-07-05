#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter any letter:");
    scanf("%c",&ch);
    if (ch >= 'a' && ch <='z')
    {
        printf("The letter is small alphabet");
    }
    else if (ch >= 'A' && ch <='Z')
    {
        printf("The letter is capital alphabet");
    }
    else
    {
        printf("The letter is not alphabet");
    }
    
    

    return 0;
}
