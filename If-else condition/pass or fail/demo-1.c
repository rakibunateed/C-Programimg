#include<stdio.h>
int main(int argc, char const *argv[])
{
    int mark;
    printf("Enter any mark (1-100):");
    scanf("%d",&mark);
    if (mark > 100 || mark < 0)
    {
        printf("Invalid marks");
    }
    else if (mark >= 80 && mark <= 100)
    {
        printf("A+");
    }
    else if (mark >= 70 && mark <= 100)
    {
        printf("A");
    }
    else if (mark >= 60 && mark <= 100)
    {
        printf("A-");
    }
    else if (mark >= 50 && mark <= 100)
    {
        printf("B");
    }
    else if (mark >= 33 && mark <= 100)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}
