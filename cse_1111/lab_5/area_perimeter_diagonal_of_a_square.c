#include<stdio.h>
int main(){
    float a,area,perimeter,diagonal;
    printf("Enter the length of a square : \n");
    scanf("%f",&a);
    area = a*a;
    printf("The area of the square is : %.2f\n",area);
    perimeter = 4*a;
    printf("The perimeter of the square is : %.2f\n",perimeter);
    diagonal = 1.414*a;
    printf("The diagonal of the square is : %.2f\n",diagonal);
    return 0;
}
