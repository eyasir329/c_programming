#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    if(mark>=80){
        printf("Your grade is A+");
    }
    else if(mark<80&& mark>=70){
        printf("Your grade is A");
    }
    else if(mark<60&& mark>=50){
        printf("Your grade is A-");
    }
    else if(mark<50&& mark>=40){
        printf("Your grade is B");
    }
    else{
        printf("your grade is F");
    }
    return 0;
}
