#include<stdio.h>
int main(){
    double a,b,area;
    printf("Enter two length of triangle \n");
    scanf("%lf %lf",&a,&b);
    area = 0.5*a*b;
    printf("The Area of the Triangle is : %lf \n",area);
    return 0;
}
