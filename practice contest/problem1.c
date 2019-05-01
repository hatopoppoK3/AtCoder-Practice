#include<stdio.h>

int main() {
    int a,b,c;
    char string[101];

    scanf("%d",&a);
    scanf("%d %d",&b,&c);
    scanf("%c",string);

    printf("%d %s",a+b+c,string);

    return 0;
}