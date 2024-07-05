#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    if (number > 0  )
    {
        printf("The number is positive");
    }
    else if (number < 0)
    {
        printf("The number is negative");
    }
    
    else
    {
        printf("Zero");
    }
    
    
    return 0;
}
