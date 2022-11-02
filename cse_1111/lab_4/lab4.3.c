#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter two number : ");
    scanf("%lf %lf", &a,&b);
    c = a/b;
    //double c = a/b;
    printf("The result is %lf",c);
    return 0;
}

