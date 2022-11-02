#include<stdio.h>
int main(){
    double radius,diameter,circumference,area;
    printf("Enter a radius of a circle : \n");
    scanf("%lf",&radius);
    diameter = 2*radius;
    printf("Diameter of circle is %.2lf\n",diameter);
    circumference = 2*3.14*radius;
    printf("The circumference of the circle is %.2lf\n",circumference);
    area = 3.14*radius*radius;
    printf("Area of the circle is %.2lf\n",area);
    return 0;
}
