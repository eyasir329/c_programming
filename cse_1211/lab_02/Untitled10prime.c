/*prime number*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if((num%2!=0)&&(num%3!=0)&&(num%5!=0)&&(num%7!=0)){
        if(num==1){
            printf("%d is not a prime number\n",num);
        }else{
            printf("%d is a prime number\n",num);
        }
    }else if(num==2||num==3||num==5||num==7){
            printf("%d is a prime number\n",num);
    }else{
        printf("%d is not a prime number\n",num);
    }
    return 0;
}
