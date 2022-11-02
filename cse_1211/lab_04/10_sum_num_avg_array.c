#include<stdio.h>
int main(){
    int i,sum=0;
    float avg;
    for(i=0;i<=10;i++){
        scanf("%d",i);
        sum = sum + i;
    }
    avg = sum/10;
    printf("Sum of %d +  = %d \n",i,sum);

    printf("Avg of 10 number is %.6f \n",avg);
    return 0;
}
