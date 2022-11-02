#include<stdio.h>
int main(){

    ///signed integer
    printf("signed integer numbers are,\n");
    //short int-%d, %hi
    short int a = 50;
    printf("Short integer number : %hi\n",a);

    //int number-%d, %i
    int b = 56464;
    printf("Integer number : %i\n",b);

    //long int-%ld, %li
    long c = 968596859L;
    printf("Long number is : %li\n",c);

    //long long-%lld,%lli
    long long d = 255656465LL;
    printf("Long long number is : %lli\n",d);

    //octal number-%o
    int o = 077;//surute 0 dite hobe
    printf("octal number is : %o\n");

    //hexadecimal-%x, %X
    int h =0XAD84;//surute 0X dite hobe
    printf("Hexadecimal number is : %x\n\n",h);

    ///unsigned integer**Always positive
    printf("unsigned integer numbers are,\n");

    //unsigned short-%hu
    unsigned short us = 415;
    printf("Unsigned short number is : %us\n",us);

    //unsigned int-%u
    unsigned int ui = 544;
    printf("Unsigned integer number is : %u\n",ui);

    //unsigned long-%lu
    unsigned long ul = 5454;
    printf("Unsigned long number is : %lu\n",ul);

    //unsigned long long-%llu
    unsigned long long ull = 44744;
    printf("Unsigned long long number is : %llu\n",ull);

    ////unsigned a (-) number nile somossa ase... binary te convert kore desimal a nibe;
    unsigned int uin = -544;
    printf("Unsigned negative integer number is : %u\n",uin);
    return 0;
}