#include<stdio.h>
int main(){
    int ch;
    printf("Enter a Character : \n");
    scanf("%d",&ch);
    printf("The Character is %d\n",ch);
    if(ch%5==0 && ch%11==0){
        printf("Divisible by 5 and 11\n");
    }
    else{
        printf("The Character is not divided by 5 and 11\n");
    }
    return 0;
}
