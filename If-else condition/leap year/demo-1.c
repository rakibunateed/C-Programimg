#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter any year:");
    scanf("%d",&year);
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 !=0)))
    {
        printf("The year is leap year");
    }
    else
    {
        printf("The year is not leap year");
    }
    
    
    return 0;
}
