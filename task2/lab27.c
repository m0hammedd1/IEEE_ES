#include <stdio.h>

int square(int num) {
    return num*num;
}

int main() {
    int number, result;

    printf("input the number for square: ");
    scanf("%i", &number);

    result = square(number);
    printf("The square is: %i\n",  result);

    return 0;
}