#include <stdio.h>

void checkEven(int num) {
    if (num&1) {
        printf("the number is odd.\n");
    }
    else {
        printf("The number is even.\n");
    }
}

int main() {
    int number;

    printf("input any number: ");
    scanf("%i", &number);

    checkEven(number);
    return 0;
}