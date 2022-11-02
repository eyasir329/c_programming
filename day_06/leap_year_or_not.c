#include<stdio.h>
int main(){
    int a;
    printf("Enter a Year\n");
    scanf("%d",&a);
    if(a%400==0){
        printf("This year is leap year\n");
    }
    else if(a%4==0){
        printf("This year is leap year\n");
    }
    else if(a%100==0){
        printf("This year is not a leap year\n");
    }
    else{
        printf("This year is not a leap year\n");
    }
    return 0;
}