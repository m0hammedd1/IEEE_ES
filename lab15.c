#include <stdio.h>

int main() {
    int first;
    scanf("%i",&first);
    int x=(first%2);
    switch(x){
    case 1:{
        printf("odd");
        break;
    }
    case 0:{
     printf("even");
    }
    }
    return 0;
}
