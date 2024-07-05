//Lowercase to Uppercase letter.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char lower,upper;
    printf("Enter any lowercase letter:");
    scanf("%c",&lower);

    //toupper() it is a library function.
    upper = toupper(lower);
    printf("The uppercase letter is:%c",upper);
    return 0;
}
