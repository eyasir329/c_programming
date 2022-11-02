#include<stdio.h>
int main(){
    int a=24;
    int c;
    c = a;
    printf("'=' Operator Example, Value of c = %d\n",c);
    c += a;
    printf("'+=' Operator Example, Value of c = %d\n",c);
    c -= a;
    printf("'-=' Operator Example, Value of c = %d\n",c);
    c *= a;
    printf("'*=' Operator Example, Value of c = %d\n",c);
    c /= a;
    printf("'/=' Operator Example, Value of c = %d\n",c);
    c = 200;
    c %= a;
    printf("'%=' Operator Example, Value of c = %d\n",c);
    c <<= 2;
    printf("'<<=' Operator Example, Value of c = %d\n",c);
    c >>= a;
    printf("'>>=' Operator Example, Value of c = %d\n",c);
    c &= a;
    printf("'&=' Operator Example, Value of c = %d\n",c);
    c ^= a;
    printf("'^=' Operator Example, Value of c = %d\n",c);
    c |= a;
    printf("'|=' Operator Example, Value of c = %d\n",c);
    return 0;
}
