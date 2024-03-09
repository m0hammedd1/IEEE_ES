#include <stdio.h>

int main(){
int num =1;
int i ;
int j ;
int k ;
int rows =0;

scanf("%i",&rows);

for (i=1;i<=rows;i++)
{
      for (j =(rows-i);j>0;--j)
      {
        printf(" ");
      }
      for (k=0;k<i ;++k)
      {
        printf("%i ",num);
        num++;
      }
  printf("\n");
}
return 0 ;
}
