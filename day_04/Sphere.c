#include<stdio.h>
int main(){
    double R,V,pi;
    pi = 3.14159;
    scanf("%lf",&R);
    V = (4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",V);
    return 0;
}