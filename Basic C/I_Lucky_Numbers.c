#include<stdio.h>
#include<math.h>
int main() {

    int n;
    scanf("%d", &n);
    int d1, d2;

    d1=n%10;
    d2=n/10;

    if(d1%d2==0 || d2%d1==0) {
            printf("YES");
        }
    else {
            printf("NO");
        }

return 0;
}