#include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character\n");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='a' && ch<='z')){
        printf("The Character is Alphabet and it's %c\n",ch);
    }
    else if((ch>='0' && ch<='9')){
        printf("The Character is digit and it's %c\n",ch);
    }
    else{
        printf("The Character is Special Chararcter and it's %c\n",ch);
    }
    return 0;
}