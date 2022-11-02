#include<stdio.h>
int main(){
    int num,r,d,i;
    num = 1234;
    for(i=num;num>0;num/10){
        printf("%d\n",num);
    }
    r = num % 10;
    printf("%d\n",r);
    return 0;
}

