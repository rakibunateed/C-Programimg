#include<stdio.h>
int main(int argc, char const *argv[])
{
    int choice;
    float temp,convertedTemp;

    printf("Temperature conversion menu\n");
    printf("1.Fahrenheit to Celsius\n");
    printf("2.Celsius to Fahrenheit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the fahrenheit temperature:");
        scanf("%f",&temp);
        convertedTemp = (5*(temp-32))/9;
        printf("The temperature in celsius = %.2f\n",convertedTemp);
        break;
    case 2:
        printf("Enter the Celsius temperature:");
        scanf("%f",&temp);
        convertedTemp = (temp*1.8)+32;
        printf("The temperature in fahrenheit = %.2f\n",convertedTemp);
        break;    
    
    default:
        printf("Not a correct option");
        break;
    }


    return 0;
}
