// Octal to hexa-decimal.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter any octal number:");
    scanf("%o",&number);
    printf("Hexa-decimal number is:%x",number);
    return 0;
}
