#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("enter the number of rows: ");
    scanf("%i", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%i ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}