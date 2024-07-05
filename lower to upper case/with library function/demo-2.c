//Uppercase to Lowercase letter.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char upper,lower;
    printf("Enter any uppercase letter:");
    scanf("%c",&upper);

    //tolower() it is a library function.
    lower = tolower(upper);
    printf("The lowercase letter is:%c",lower);
    return 0;
}
