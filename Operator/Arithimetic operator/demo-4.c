//write a program that takes two integer and display sum,sub,multi,div,remainder.

#include<stdio.h>
int main(int argc, char const *argv[])
{
   int num1,num2,result;
    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your second number:");
    scanf("%d",&num2);

    // sum.
    result= num1 + num2;
    printf("Sum is:%d\n",result);

    // sub.
    result= num1 - num2;
    printf("Sub is:%d\n",result);

    // multi.
    result= num1 * num2;
    printf("Multi is:%d\n",result);

    // div.
    result= num1 / num2;
    printf("Div is:%d\n",result);

    // remainder.
    result= num1 % num2;
    printf("Remainder is:%d\n",result);
    return 0;
}
