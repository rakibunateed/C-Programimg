#include<stdio.h>
int main(int argc, char const *argv[])
{
    char upper;
    printf("Enter a uppercase letter:");

    scanf("%c",&upper); // A=65
     //uppercase 'A' to lowercase 'a' different is 32
    printf("The lowercase ascii letter is:%c",upper + 32); // lower a=97
    return 0;
}
