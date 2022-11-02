#include<stdio.h>
int main(){
    int t,as;
    double s,l;
    scanf("%d %d",&t,&as);
    //total distance,s
    s = as * t;
    //spent fuel,l
    l = s/12;
    printf("%.3lf\n",l);
    return 0;
}