#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2;
    printf("Enter the first number:");\
    scanf("%d",&num1);
    printf("Enter the second number:");\
    scanf("%d",&num2);
    if (num1 > num2)
    {
        printf("%d is largest number",num1);
    }
    else if (num2 > num1)
    {
        printf("%d is largest number",num2);
    }
    else{
        printf("Numbers are equal");
    }
 
    
    return 0;
}
