#include <stdio.h>
int main(){

    int a = 30;
    int b = 50;
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d+20*2-%d=%d\n",a,b,a+20*2-b);
    printf("(%d+10)*2-%d=%d\n",a,b,(a+10)*2-b);
    
    a=100;
    printf("a+50=%d\n",a+50);
    return 0;
}