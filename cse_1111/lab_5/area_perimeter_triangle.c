#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("Enter three arm length of a triangle : \n");
    scanf("%f %f %f",&a,&b,&c);
    s = ((a+b+c)/3);
    printf("The result of Half Perimeter is : %.2f\n",s);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is : %.2f\n",area);
    return 0;
}
