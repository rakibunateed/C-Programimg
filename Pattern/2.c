#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row,col,n;
    scanf("%d",&n);

    for (row = 1; row <= n; row++)
    {
       for (col = 1; col <= row; col++)
       {
       printf("%d",row);
       }
       printf("\n");
       
    }
    
    return 0;
}
