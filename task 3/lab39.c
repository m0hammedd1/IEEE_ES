#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array\n");
    scanf("%i",&size);
    printf("enter array elements\n");
    int arr[size];
    scanf("%i",&arr[0]);
    int min=arr[0];
    int max=arr[0];
    for (int i=1;i<size;i++)
    {
        scanf("%i",&arr[i]);
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    printf("max = %i\nmin= %i\n",max,min);

}
