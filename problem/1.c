#include<stdio.h>
int main(int argc, char const *argv[])
{
    int W;
    scanf("%d",&W);
        if (W > 2 && W % 2 == 0) {
            printf("\nYES");
        } else {
            printf("\nNO");
        }
   
    return 0;
}
