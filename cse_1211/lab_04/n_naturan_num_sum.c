#include<stdio.h>
int main(){
    int num,n,sum=0;
    printf("Enter nth term\n");
    scanf("%d",&n);
    for(num=1;num<=n;num++){
        sum = sum + num;
        printf("%d ",num);
    }
    printf("\n%d ",sum);
    return 0;
}

