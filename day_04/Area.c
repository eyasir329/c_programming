#include<stdio.h>>
int main(){
    double A,B,C,pi,triangle,circle,trapezium,square,rectangle;
    pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    triangle = (1/2.0)*A*C;
    circle = pi*C*C;
    trapezium = (1/2.0)*(A+B)*C;
    square = B*B;
    rectangle = A*B;
    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);
    return 0;
}