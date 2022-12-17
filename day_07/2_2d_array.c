#include<stdio.h>
int main(){
    int array1[3][2],array2[2][4],i,j,sum;
    //array1
    printf("Enter elements for array1 \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("index [%d %d] is : ",i,j);
            scanf("%d",&array1[i][j]);
        }
        printf("\n");
    }
    //array2
    printf("Enter elements for array2 \n");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("index [%d %d] is : ",i,j);
            scanf("%d",&array2[i][j]);
        }
        printf("\n");
    }

    //matrix1
    printf("Matrix1 is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf(" %d ",array1[i][j]);
        }
        printf("\n");
    }

    //matrix2
    printf("Matrix2 is :\n");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf(" %d ",array2[i][j]);
        }
        printf("\n");
    }

//edited next time
/*
    //addition of two matrix
    printf("Final Matrix is :\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(j==i){
                sum = array1[i][j]+ array2[i][j];
            }else if(i>j){
                sum = array1[i][j]+ array2[i][j];
                printf("%d",sum);
            }
        }
    }
    */
    ///hhh
    printf("hello c");

    printf("hello c");
    printf("hello c");
    
    printf("hello c");
    printf("hello c");

    return 0;
}