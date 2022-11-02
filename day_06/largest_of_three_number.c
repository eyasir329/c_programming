#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter Three Numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if((num1>num2) && (num1>num3)){
        printf("Number1 is is largest among them and it's %d\n",num1);
    }
    if((num2>num3) && (num2>num1)){
        printf("Number2 is is largest among them and it's %d\n",num2);
    }
    if((num3>num2) && (num3>num1)){
        printf("Number3 is is largest among them and it's %d\n",num3);
    }

}