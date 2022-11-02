#include<stdio.h>
int main(){
    int num1,num2;
    num1=5;
    num2=6;
    int temp = num1;
    num1= num2;
    num2=temp;
    printf("num1=%d\n num2=%d\n",num1,num2);
    return 0;
}
