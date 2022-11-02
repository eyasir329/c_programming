#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Two Numbers\n");
    scanf("%d %d",&a,&b);
    if (a==b){
        printf("Two Numbers Are Equal\n");
    }
    else{
        printf("Two Numbers are not Equal\n");
    }
    return 0;
    
}