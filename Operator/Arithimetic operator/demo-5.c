// Write a program that calculates the area of triangle.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float base,height,area;
    printf("Base =");
    scanf("%f",&base);
    printf("Height =");
    scanf("%f",&height);

    area= (float) 1/2 * base * height; //area formula=1/2*bhumi*ucchota
    printf("The area is = %.2f",area);
    return 0;
}
