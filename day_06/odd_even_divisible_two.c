#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    if((num1%2==0)||(num2%2==0)){
        if(num1%4==0){
            printf("The number1 %d is even and divisible by 4\n",num1);
        }
        else if(num2%4==0){
            printf("The number2 %d is even and divisible by 4\n",num2);
        }
        
    }
    else{
        if(num%3==0){
            printf("The number %d is odd and divisible by 3\n",num);
        }
        else{
            printf("The number %d is odd and not divisible by 3\n",num);
        }
    }
    return 0;
}