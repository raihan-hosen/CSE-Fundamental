#include <stdio.h>
int main() {
    char s[10001];
    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%s", s);

        int capital = 0, small = 0, digits = 0;
        
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                capital++;
            } 
            else if (s[i] >= 'a' && s[i] <= 'z') {
                small++;
            } 
            else if (s[i] >= '0' && s[i] <= '9') {
                digits++;
            }
        }
        printf("%d %d %d\n", capital, small, digits);
    }

    return 0;
}