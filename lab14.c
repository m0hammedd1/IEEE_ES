#include <stdio.h>

int main() {
    double first;
    double second;
    char o;
    scanf("%lf",&first);
    scanf("%o",&o);
    scanf("%lf",&second);
    switch(o){
    case '+':{
    printf("%i",first+second);
    break;
    }
    case '-':{
    printf("%i",first-second);
    break;
    }
    case '*':{
    printf("%i",first*second);
    break;
    }
    case '/':{
    printf("%i",first/second);
    break;
    }
    }
    return 0;
}
