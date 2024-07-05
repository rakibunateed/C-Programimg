//Write a program to display Centigrade to Fahrenheit.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c,f;
    printf("Centigrade =");
    scanf("%f",&c);

    f = ((c*1.8)+32); //Centigrade to Fahrenheit = (c*1.8)+32.
    printf("Fahrenheit =%.2f",f);


    return 0;
}
