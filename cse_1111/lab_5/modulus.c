#include<stdio.h>
int main(){
    int a,b,modulus1,modulus2;
    printf("Enter two number : \n");
    scanf("%d %d",&a,&b);
    modulus1 = a % b;
    modulus2 = b % a;
    printf("The Result for a modulus b is : %d\n",modulus1);
    printf("The Result for b modulus a is : %d\n",modulus2);
    return 0;
}
