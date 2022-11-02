#include<stdio.h>
int main()
{
    double a,b,area;
    printf("Enter a number : ");
    scanf("%lf", &a);
    b = 3.14;
    area = b*a*a;
    printf("The result is %.2lf",area);
    return 0;
}

