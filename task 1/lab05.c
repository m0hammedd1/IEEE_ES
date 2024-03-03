#include <stdio.h>
int main() {

int a,b,c;
printf("enter first number\n");
scanf("%i",&a);
printf("enter second number\n");
scanf("%i",&b);
printf("enter third number\n");
scanf("%i",&c);
a=a|1;
b=!2&b;
int holder=c;
holder/=4;
holder=holder%2;
c=c&(holder*4);
printf("%i \n",a);
printf("%i \n",b);
printf("%i \n",c);
return 0;
}
