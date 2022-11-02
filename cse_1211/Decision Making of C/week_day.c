#include<stdio.h>
int main(){
    int week_num;
    printf("Enter a week number(1-7)\n");
    scanf("%d",&week_num);
    switch (week_num)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    default:
        printf("Week number must be 1 to 7\n");
        break;
    }
}