#include<stdio.h>
int main(){
    int array[3],i,j;
    printf("Enter three array elements \n");
    for(i=0;i<3;i++){
        scanf("%d",&array[i]);
    }
    printf("Input array is [");
    for(j=0;j<3;j++){
        printf(" %d ",array[j]);
    }
    printf("]");
    return 0;
}