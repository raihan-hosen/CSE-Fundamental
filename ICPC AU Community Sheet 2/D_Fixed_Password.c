#include<stdio.h>
int main() {
    int x , pass=1999;

    while (1) {
          scanf("%d", &x);
        if(x==pass) {
            printf("Correct\n");
            break;
        }
        else {
            printf("Wrong\n");
        }
    }

return 0;
}