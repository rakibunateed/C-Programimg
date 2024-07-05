// area of sides of the triangle.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,s,area;
    printf("Enter sides of the triangle:");
    scanf("%f %f %f",&a,&b,&c);

     s=(a+b+c)/2; //formula:s=(a+b+c)/2

    area = sqrt (s*(s-a)*(s-b)*(s-c)); //formula:√(s(s-a)(s-b)(a-c))
    printf("Area sides of the triangle  is = %.2f",area);
    return 0;
}
