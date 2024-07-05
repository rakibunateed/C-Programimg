//Write a program to fine area and circumference of the circle.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float radius,area,circumference;
    printf("Radius =:");
    scanf("%f",&radius);
    // Area
    area =(3.1416*radius*radius); //formula = πr^2
    printf("The area is:%.2f\n",area);

    //Circumference
    circumference = 2*3.1416*radius; // formula = 2πr
    printf("The Circumference is:%.2f",circumference);

    return 0;
}
