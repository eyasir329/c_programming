#include<stdio.h>
int main(){
    int num,r,d,rever=0,i;
    num = 1234;
    for(i=num;num!=0;num/=10){
        r = num % 10;
        rever = rever*10+r;
        printf("%d\n",r);
        /*if(r%2==0){
            printf("even is %d ",r);
        }else{
           printf("even is %d ",r);
        }*/
    }
    printf("%d\n",rever);
    return 0;
}
