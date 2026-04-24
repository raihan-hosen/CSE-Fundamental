#include<stdio.h>
int main() {
    char s;
    scanf("%c", &s);

    int n, num;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%d", &num);
        for(int j=1; j<=num; j++) {
            printf("%c", s);
        }
        printf("\n");
    }

return 0;
}