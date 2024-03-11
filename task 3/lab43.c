#include<stdio.h>
int main()
{
    printf("enter size : ");
    int size;
    scanf("%i",&size);
    int arr[size];
    printf("enter %i elements\n",size);
    for(int i=0;i<size;i++)
    {
        printf("element %i -> ",i);
        scanf("%i",&arr[i]);
    }
    int del=0;
    int xx;
    xx:
    printf("enter index to delete\n");
    scanf("%i",&del);
    if(del<0||del>=size)
    {
        printf("error\n");
        goto xx;
    }
    int new_array[size-1];
    int h=0;
    for(int i=0;i<size;++i)
    {
        if(i!=del)
        {
            new_array[h]=arr[i];
            h++;
        }
    }
    printf("new array is -> ");
    for(int i=0;i<size-1;i++)
    {
        printf("%i ",new_array[i]);
    }

}
