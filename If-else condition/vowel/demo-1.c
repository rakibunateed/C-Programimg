#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter any vowel :");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Character is vowel");
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Character is vowel");
    }
    else
    {
        printf("Character is consonant");
    }
 
    return 0;
}
