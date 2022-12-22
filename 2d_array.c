#include<stdio.h>
int main(){
    int array[3][4],i,j;
    printf("Enter array elements : \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("index [%d %d] is: ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    printf("Matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    printf("hi matrix\n");
    return 0;
}