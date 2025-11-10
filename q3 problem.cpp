#include <stdio.h>

int main() {
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("Two decimals: %.2f\n", x);
    printf("Exponential: %e\n", x);
    printf("Scientific: %E\n", x);
    return 0;
}
