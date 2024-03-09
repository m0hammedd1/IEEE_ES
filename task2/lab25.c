#include <stdio.h>

int main(){
int number;
float res=0;
printf("enter a number\n");
scanf("%i",&number);
for(int i=1;i<=number;i++)
{
    double x=i;
    res+=1/x;
}
printf("result is : %f\n",res);
return 0 ;
}
