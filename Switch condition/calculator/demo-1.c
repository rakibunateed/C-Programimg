#include<stdio.h>
int main()
{
    double num1,num2,sum,sub,mul,div;
    char operator;
    printf("Enter operator number (+,-,*,/): ");
    scanf("%c",&operator);
    printf("Enter first number: ");
    scanf("%lf",&num1);
    
    printf("Enter second number: ");
    scanf("%s",&num2);
    switch (operator)
    {
    case '+':
        sum = num1 + num2;
        printf("sum is =%.2lf",sum);
        break;
    case '-':
        sub = num1 - num2;
        printf("sub is =%.2lf",sub);
        break;
    case '*':
        mul = num1 * num2;
        printf("mul is =%.2lf",mul);
        break;
    case '/':
    if (num2 !=0)
    {
        div = num1 / num2;
        printf("div is =%.2lf",div);
        
    }
    
    else
    {
        printf("Error:Division by zero is not allowed\n");
    }
    break;
    
    
    default:
        printf("Error:Invalid operator\n");
        break;
    }
    
    return 0;
}
