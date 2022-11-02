#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number : \n");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("A is the largest number. It's %d\n",a);
    }
    else if(b>a){
        printf("B is the largest number. It's %d\n",b);
    }
    else{
        printf("Two numbers are same. It's %d\n",b);
    }
    return 0;
}
