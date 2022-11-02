#include<stdio.h>
int main()
{
    int P1, P1A, P2, P2A;
    float P1P, P2P;
    scanf("%d%d%f",&P1, &P1A, &P1P);
    scanf("%d%d%f",&P2, &P2A, &P2P);
    float Result;
    Result = (P1A*P1P) + (P2A*P2P);
    printf("VALOR A PAGAR: R$ %.2f\n",Result);
    return 0;
}
