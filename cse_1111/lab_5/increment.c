#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number : \n");
    scanf("%d",&a);
    //prefix-increment
    b = ++a;
    printf("The Number is : %d\n",b);
    //postfix-increment
    b = a++;
    printf("The Number is : %d\n",b);
    return 0;
}
