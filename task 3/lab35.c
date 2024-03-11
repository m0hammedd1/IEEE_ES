#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size=0;
    printf("Input the number of elements to store in the array :\n");
    scanf("%i",&size);
    int arr[size];
    printf("input %i number of elements in the array :\n",size);
    int sum=0;
    for(int i=0;i<size;i++)
    {
        printf("element - %i : ",i);
        scanf("%i",&arr[i]);
        sum+=arr[i];
    }
    printf("sum = %i",sum);
}

