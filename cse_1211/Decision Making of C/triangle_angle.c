#include<stdio.h>
int main(){
    int ang1,ang2,ang3,tot_ang;
    printf("Enter tree triangle angle : \n");
    scanf("%d %d %d",&ang1,&ang2,&ang3);
    tot_ang = ang1 + ang2 + ang3;
    if(tot_ang==180){
        if (ang1==0){
            printf("Triangle is not valid\n");
        }else if (ang2==0){
            printf("Triangle is not valid\n");
        }else if (ang3==0){
            printf("Triangle is not valid\n");
        }else{
            printf("Triangle is valid\n");
        }
        
    }else{
        printf("Triangle is not valid\n");
    }
    return 0;
}