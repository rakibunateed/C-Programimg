#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,fact = 1;
    printf("Enter any number:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d\n",fact);
    
    return 0;
}
