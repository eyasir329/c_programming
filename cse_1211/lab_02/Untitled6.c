#include<stdio.h>
int main(){
    int num;
    num=211;
    if(num%2==0){
            if(num>100){
                printf("Even and big\n");
            }else{
              printf("Even and small\n");
            }

    }else{
        if(num>100){
                printf("odd and big\n");
            }else{
              printf("odd and small\n");
            }
    }
    return 0;
}
