#include<stdio.h>
int main()
{
    int num,count = 0;
    printf("Enter any positive number:");
    scanf("%d",&num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
        
    }
    if (count == 0)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not prime number");
    }
    
    
    return 0;
}
