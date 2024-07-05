// Swap two value with temporary variable.          

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1 = 5;
    int num2 = 10;
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 is = %d\n",num1);
    printf("num2 is = %d\n",num2);

    return 0;
}
