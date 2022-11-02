#include<stdio.h>
int main(){
    float a,b,c,average;
    printf("Enter three age : \n");
    scanf("%f %f %f",&a,&b,&c);
    average = (a+b+c)/3;
    printf("The Result is : %f",average);
    return 0;
}
