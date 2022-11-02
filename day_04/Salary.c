#include<stdio.h>
int main(){
    int n,h;
    float r,sum;
    scanf("%d %d %f",&n,&h,&r);
    printf("NUMBER = %d\n",n);
    sum = h * r;
    printf("SALARY = U$ %.2f\n",sum);
    return 0;
}