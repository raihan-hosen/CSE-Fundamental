#include<stdio.h>
int main() {
 
    char N;
    scanf("%c", &N);
    int ascii=(int)N;
 
    if(ascii>64 && ascii<97) {
        printf("%c",ascii+32);
    }
    else {
        printf("%c", ascii-32);
    }
 
return 0;
}