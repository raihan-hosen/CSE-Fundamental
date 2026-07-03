#include<stdio.h>
int main() {

    char N;
    scanf("%c", &N);
    int ascii=(int)N;

    if(ascii>64 && ascii<97) {
        printf("ALPHA\nIS CAPITAL");
    }
    else if(ascii>96 && ascii<122){
        printf("ALPHA\nIS SMALL");
    }
    else {
        printf("IS DIGIT");
    }

return 0;
}