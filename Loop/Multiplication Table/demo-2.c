// Multiplication Table with while loop.

#include<stdio.h>
int main()
{
    while (1)
    {
         int num,mul;
    printf("Enter any number:");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {
        mul = num * i;
        printf("%d x %d = %d\n",num,i,mul);
    }
    }
    
   
    
    return 0;
}
