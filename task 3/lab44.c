#include<stdio.h>
int main()
{
    int size;
    printf("enter size ");
    scanf("%i",&size);
    int arr[size];
    int i=0;int max=0,max2=0;
    for(i=0;i<size;i++)
    {
    printf("element %i -> ",i);
     scanf("%i",&arr[i]);
     if(arr[i]>max)
     {
         max2=max;
         max=arr[i];
     }
     else if(arr[i]>max2)
     {
         max2=arr[i];
     }
    }
    printf("second largest number in array is %i \n",max2);

}
