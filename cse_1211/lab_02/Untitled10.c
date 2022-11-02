/*prime number*/
#include<stdio.h>
int main(){
    int num,i;
    scanf("%d",&num);
    if(num==0&&num==1){
        printf("Not Prime");
    }else if{
        for(i=2,i<=num,i++){
            if(num%i==0){
                printf("Not Prime\n");
            }
            else{
                printf("Prime\n");
            }
        }
    }else{
        printf("Prime\n");
    }
    return 0;
}
