//Write a program to display Fahrenheit to Centigrade.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c,f;
    printf("Fahrenheit =");
    scanf("%f",&f);

    c = (5*(f-32))/9; //Fahrenheit to Centigrade formula =(5*(f-32))/9
    printf("Centigrade =%.2f",c);


    return 0;
}