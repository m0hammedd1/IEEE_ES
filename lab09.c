#include <stdio.h>
int main() {

int first,second,third;
printf("enter first number\n");
scanf("%i",&first);
printf("enter second number\n");
scanf("%i",&second);
printf("enter third number\n");
scanf("%i",&third);
int cnt=0;
if(first==second)
{
    cnt++;
}
if(first==third)
{
    cnt++;
}
if(third==second)
{
    cnt++;
}
if(cnt==0)
{
printf("Scalene\n");
}
else if(cnt==1){

printf("Isosceles\n");
}
else{
   printf("Equilateral\n");

}
return 0;
}
