#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : \n");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is positive number\n",num);
    }else if (num==0)
    {
        printf("%d is zero\n",num);
    }else{
        printf("%d is a negative number\n",num);
    }
    return 0;
}