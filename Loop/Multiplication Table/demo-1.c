// Multiplication Table with for loop.

#include<stdio.h>
int main()
{
    int num,mul;
    printf("Enter any number:");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {
        mul = num * i;
        printf("%d x %d = %d\n",num,i,mul);
    }
    
    return 0;
}
