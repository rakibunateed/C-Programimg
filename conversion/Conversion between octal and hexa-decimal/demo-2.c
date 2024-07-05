// Hexa-decimal to Octal.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter any hexa-decimal number:");
    scanf("%x",&number);
    printf("Octal number is:%o",number);
    return 0;
}