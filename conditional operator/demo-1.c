#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,large;
    printf("Enter any two value:");
    scanf("%d %d",&num1,&num2);

    large = (num1 > num2) ? num1 : num2;
    printf("Larger number is = %d",large);
    return 0;
}
