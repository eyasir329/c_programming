#include<stdio.h>
#include<math.h>
int main(){
    double x1,y1,x2,y2,A,b,c;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    b = x2-x1;
    c = y2-y1;
    A = sqrt((b*b)+(c*c));
    printf("%.4lf\n",A);
    return 0;
}