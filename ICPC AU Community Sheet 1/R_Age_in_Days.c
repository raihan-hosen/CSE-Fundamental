#include<stdio.h>
int main() {

    int N;
    scanf("%d", &N);

    int y,m,d;

    y=N/365;
    m=(N%365)/30;
    d=(N%365)-(m*30);

    printf("%d years\n", y);
    printf("%d months\n", m);
    printf("%d days\n", d);


    return 0;
}