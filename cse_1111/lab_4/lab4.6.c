#include<stdio.h>
int main()
{
    double a,b,area;
    printf("Enter two number : ");
    scanf("%lf %lf", &a,&b);
    area = 0.5*a*b;
    printf("The result is %.2lf",area);
    return 0;
}
