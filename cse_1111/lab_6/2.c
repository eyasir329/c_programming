#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number : \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("First is the largest number. It's %d\n",a);
    }
    else if(b>a && b>c){
        printf("Second is the largest number. It's %d\n",b);
    }
    else if(c>a && c>b){
        printf("Third is the largest number. It's %d\n",c);
    }
    else{
        printf("It's %d\n",b);
    }
    return 0;
}
