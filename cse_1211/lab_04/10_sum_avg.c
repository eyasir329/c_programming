#include<stdio.h>
double main(){
    double n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,sum;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
    double avg;
    sum = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
    avg = (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;
    printf("sum is %.0lf\n",sum);
    printf("average is %.6lf\n",avg);
    return 0;
}
