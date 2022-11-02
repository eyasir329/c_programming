#include<stdio.h>
int main(){
    char ch[10];
    scanf("%s",&ch);
    double a,b,total;
    scanf("%lf %lf",&a,&b);
    total = a+(b*0.15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}