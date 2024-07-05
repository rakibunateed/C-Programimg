#include<stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {   
        if (i == 9)
        break;
        printf("%d\n",i);
    
    }
    
    return 0;
}