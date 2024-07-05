#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a alphabet:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
        printf("The alphabet is vowel");
        break;
    case 'e':
        printf("The alphabet is vowel");
        break;
    case 'i':
        printf("The alphabet is vowel");
        break;
    case 'o':
        printf("The alphabet is vowel");
        break;
    case 'u':
        printf("The alphabet is vowel");
        break;
    case 'A':
        printf("The alphabet is vowel");
        break;
    case 'E':
        printf("The alphabet is vowel");
        break;
    case 'I':
        printf("The alphabet is vowel");
        break;
    case 'O':
        printf("The alphabet is vowel");
        break;
    case 'U':
        printf("The alphabet is vowel");
        break;
    default:
        printf("The alphabet is consonant");
        break;
    }
    return 0;
}
