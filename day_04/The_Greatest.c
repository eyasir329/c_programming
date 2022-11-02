#include<stdio.h>
int main(){
    int a,b,s;
    //double MaiorAB;
    scanf("%d %d %d",&a,&b,&s);
    //MaiorAB = (a+b+a*b*s*(a-b))/2;
    if(a>>b||a>>s){
        printf("%d eh o maior\n",a);
    }
    else if(b>>a||b>>s){
        printf("%d eh o maior\n",b);
    }
    else{
        printf("%d eh o maior\n",s);
    }
    //printf("%lf eh o maior\n",MaiorAB);
    return 0;
}