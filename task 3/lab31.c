#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y;
    x=5;
    y=3;
    printf("x: %i ,y: %i\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x: %i ,y: %i\n",x,y);
    x=x^y;
    y=y^x;
    x=y^x;
    printf("x: %i ,y: %i\n",x,y);
    int t=x;
    x=y;
    y=t;
    printf("x: %i ,y: %i\n",x,y);

}

