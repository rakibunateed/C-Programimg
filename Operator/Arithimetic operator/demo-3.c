//write a program that takes two integer and display sum and find out average of two numbers.

#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your second number:");
    scanf("%d",&num2);
    sum= num1+num2;
    printf("sum is:%d\n",sum);
    float average =(float)sum/2; //type casting
    printf("The average is:%.2f\n",average);
    
    return 0;
}