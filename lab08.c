#include <stdio.h>
int main() {

int first,second;
printf("enter first number\n");
scanf("%i",&first);

if(first<0)
{
    printf("negative\n");
}
else if(first>0){
      printf("positive\n");
}
else
{
    printf("number is 0\n");
}

return 0;
}
