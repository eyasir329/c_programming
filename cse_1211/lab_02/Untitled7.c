#include<stdio.h>
int main(){
    int num;
    num=55;
    /* gradesheet using ladder*/
    if(num>=80){
        printf("A+\n");
    }else if(num>=75){
        printf("A\n");
    }else if(num>=70){
        printf("A-\n");
    }else if(num>=65){
        printf("B\n");
    }else{
        printf("F\n");
    }
    return 0;
}

