#include<stdio.h>
int main() {
      int n;
    scanf("%d", &n);

    int num, max=0;

    for(int i=1; i<=n; i++) {
        scanf("%d", &num);

        if(num>max) {
            max=num;
        }
    }

    printf("%d\n", max);
return 0;
}