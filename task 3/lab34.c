#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size=0;
    printf("Input the number of elements to store in the array :\n");
    scanf("%i",&size);
    int arr[size];
    printf("input %i number of elements in the array :\n",size);
    for(int i=0;i<size;i++)
    {
        printf("element - %i : ",i);
        scanf("%i",&arr[i]);
    }
    printf("The values stored into the array are :\n");
    for(int i=0;i<size;i++)
    {
        printf("%i ",arr[i]);
    }
}

