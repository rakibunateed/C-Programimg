//write a program that takes two integer and display sum.

#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your second number:");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("Result is:%d\n",sum);
    
    return 0;
}
