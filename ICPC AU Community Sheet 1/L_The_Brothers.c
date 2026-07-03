#include <stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{

    char f1[100], s1[100], f2[100], s2[100];
    scanf("%s", f1);
    scanf("%s", s1);
    scanf("%s", f2);
    scanf("%s", s2);


    if(strcmp(s1, s2)==0) {
        printf("ARE Brothers");
    }
    else {
        printf("NOT");
    }

    return 0;
}