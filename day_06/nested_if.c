/* find largest number among three using nested if*/
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter Three Numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("Number1 %d is the largest number\n",num1);
        }
        else{
            printf("Number3 %d is the largest number\n",num3);
        }
    }
    else if(num2>num3){
        printf("Number2 %d is the largest number\n",num2);
    }
    else{
        printf("Number3 %d is the largest number\n",num3);
    }
    return 0;
}