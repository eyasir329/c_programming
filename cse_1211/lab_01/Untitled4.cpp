#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 80:
            printf("A+");
            break;
        case 70:
            printf("A");
            break;
        case 60:
            printf("A-");
            break;
        case 40:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
    return 0;
}

