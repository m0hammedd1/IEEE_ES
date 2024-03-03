#include <stdio.h>

int main() {
    int first,second;
    printf("enter first number\n");
    scanf("%i",&first);
    printf("enter second number\n");
    scanf("%i",&second);
    int x=(first>second);
    switch(x){
    case 0:
        {
            printf("%i",second);
            break;
        }
    case 1:
        {
        printf("%i",first);
        break;
        }
    }
    return 0;
}
