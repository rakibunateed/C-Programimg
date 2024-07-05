#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           printf("%d",i%2);
        }
        printf("\n");
        
    }

    return 0;
}