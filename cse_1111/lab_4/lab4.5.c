#include<stdio.h>
int main()
{
    int a,b,area;
    printf("Enter two number : ");
    scanf("%d %d", &a,&b);
    area = 0.5*a*b;
    printf("The result is %d",area);
    return 0;
}
