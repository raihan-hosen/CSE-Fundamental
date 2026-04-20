#include<stdio.h>
int main() {

    int x;
    scanf("%d", &x);
    int last=(x/1000);

    if(last%2==0) {
        printf("EVEN");
    }
    else {
        printf("ODD");
    }

return 0;
}