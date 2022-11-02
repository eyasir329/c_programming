#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : \n");
    scanf("%d",&a);
    if(a>0){
        printf("The number is positive and it is : %d",a);
    }
    else if(a<0){
        printf("The number is negative and it is : %d",a);
    }
    else{
        printf("It's neutral and it is : %d",a);
    }
    return 0;
}
