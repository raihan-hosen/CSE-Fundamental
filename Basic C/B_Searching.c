#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main() {

    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }

    int X, digit;
    bool found=0;
    scanf("%d", &X);

    for(int i=0; i<N; i++) {
        if(arr[i]==X) {
            found=1;
            digit=i;
            break;
        }
    }
    if(found==1) {
        printf("%d", digit);
    }
    else {
        printf("%d", -1);
    }

return 0;
}