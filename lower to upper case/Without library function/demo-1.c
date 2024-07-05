#include<stdio.h>
int main(int argc, char const *argv[])
{
    char lower;
    printf("Enter a lowercase letter:");

     scanf("%c",&lower); //lowercase a=97
    //uppercase 'A' to lowercase 'a' different is 32
    printf("The uppercase ascii letter is:%c",lower-32); //uppercase A=65
    return 0;
}
