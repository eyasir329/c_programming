#include<stdio.h>
int main(){

    int num = 45;
    float num2 = 56.58;
    char ch = 'S';
    printf("Integer number is %d\n",num);
    printf("Floating number is %f\n",num2);
    printf("Charecter is %c\n",ch);

    num = num2;
    printf("%d\n",num);
    printf("num + num2 = %f",num+num2);
    return 0;
}