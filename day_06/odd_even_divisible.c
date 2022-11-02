#include<stdio.h>
int main(){
    int num;
    printf("Enter a numbers\n");
    scanf("%d",&num);
    if(num%2==0){
        if(num%4==0){
            printf("The number %d is even and divisible by 4\n",num);
        }
        else{
            printf("The number %d is even and not divisible by 4\n",num);
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