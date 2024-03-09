#include <stdio.h>

int main(){

int i,j ;
int rowos ;

scanf("%i",&rowos);
for (i=1;i<=rowos;i++){
    for (j=0 ; j<i ;j++){
        printf("*");
    }
printf(" \n");
}
return 0 ;
}