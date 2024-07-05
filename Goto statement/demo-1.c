#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1;
    start:
    printf("%d ",i);
    i++;
    if (i <=10)
    
    goto start;
    return 0;
}
