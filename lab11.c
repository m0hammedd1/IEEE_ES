#include <stdio.h>

int main() {
    int degree;
    printf("enter the student's degree \n");
    scanf("%i",&degree);
    if (degree < 0 || degree > 100) {
        printf("error\n");
    } else if (degree < 50&&degree>0) {
        printf("Failed\n");
    } else if (degree < 65&&degree>50) {
        printf("Passed\n");
    } else if (degree < 75&&degree>65) {
        printf("Good\n");
    } else if (degree < 85&&degree>75) {
        printf("Very Good\n");
    } else {
        printf("Excellent\n");
    }

    return 0;
}
