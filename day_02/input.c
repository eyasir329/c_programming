#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("That number is %d\n",a);

    printf("Enter two number : ");
    scanf("%d %d",&b,&c);
    printf("Two numbers are %d %d\n",b,c);

    float d,e;
    printf("Enter two floating number : ");
    scanf("%f %f",&d,&e);
    printf("Two floating numbers are %f %f",d,e);

    //char ch;
    //scanf("%c",&ch);
    //printf("Enter a charecter %c",ch);

    return 0;
}