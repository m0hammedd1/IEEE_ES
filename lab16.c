#include <stdio.h>

int main() {
    int first;
    scanf("%i",&first);
    int x=(first<0);
    switch(x){
    case 1:{
        printf("%i",first*=-1);
        break;
    }
    case 0:{
     printf("%i",first);
    }
    }
    return 0;
}
