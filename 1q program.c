#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nName: %sAge: %d\n", name, age);
    return 0;
}

