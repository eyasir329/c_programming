#include<stdio.h>
int main(){
    int a;
    printf("Enter a number :\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("The Number is even and it is %d",a);
    }
    else{
        printf("The Number is odd and it is %d",a);
    }
    return 0;
}
