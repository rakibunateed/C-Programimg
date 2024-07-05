// Write a program to find Area of rectangle.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float length,width,area;
    printf("Length =:");
    scanf("%f",&length);
    printf("Width =:");
    scanf("%f",&width);

    area = length * width; //area of rectangle formula = length * width 
    printf("The area is:%.2f",area);
    return 0;
}
