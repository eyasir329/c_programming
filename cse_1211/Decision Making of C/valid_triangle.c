#include<stdio.h>
int main(){
    int lenth1,lenth2,lenth3,tot_lenth1,tot_lenth2,tot_lenth3;
    printf("Enter tree Length of a triangle : \n");
    scanf("%d %d %d",&lenth1,&lenth2,&lenth3);
    tot_lenth1 = lenth1 + lenth2;
    tot_lenth2 = lenth2 + lenth3;
    tot_lenth3 = lenth3 + lenth1;
    if(tot_lenth1>lenth3 && tot_lenth2>lenth1 && tot_lenth3>lenth2){
        printf("Triangle is valid\n");
    }
    else{
        printf("Triangle is not valid\n");
    }
    return 0;
}