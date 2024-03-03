#include <stdio.h>

int main() {
    int day;

    printf("enter a number\n");
    scanf("%d",&day);

    switch (day) {
        case 1:
            printf("Fri\n");
            break;
        case 2:
            printf("Sat\n");
            break;
        case 3:
            printf("Sun\n");
            break;
        case 4:
            printf("Mon\n");
            break;
        case 5:
            printf("Tue\n");
            break;
        case 6:
            printf("Wed\n");
            break;
        case 7:
            printf("Thu\n");
            break;
        default:
            printf("error\n");
    }

    return 0;
}
