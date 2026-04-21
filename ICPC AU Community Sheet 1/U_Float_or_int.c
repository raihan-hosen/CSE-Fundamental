#include <stdio.h>
#include <math.h> // Required for fmod()

int main() {
    float N;
    scanf("%f", &N);

    // Using fmod() instead of % for floats
    if (fmod(N, 1.0) == 0.0) {
        int num = (int)N;
        printf("int %d\n", num);
    } else {
        int num = (int)N;
        float dec = N - num;
        printf("float %d %.3f\n", num, dec);
    }

    return 0;
}
