#include<stdio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>=0){
        printf("The number is Positive\n");
    }
    else{
        printf("The number is Negative\n");
    }
    return 0;
}