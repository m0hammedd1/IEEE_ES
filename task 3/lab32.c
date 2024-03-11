#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("arr[1]: %i ,arr[3]: %i\n",arr[1],arr[3]);
    arr[1]=arr[1]+arr[3];
    arr[3]=arr[1]-arr[3];
    arr[1]=arr[1]-arr[3];
    printf("arr[1]: %i ,arr[3]: %i\n",arr[1],arr[3]);
    arr[1]=arr[1]^arr[3];
    arr[3]=arr[3]^arr[1];
    arr[1]=arr[3]^arr[1];
    printf("arr[1]: %i ,arr[3]: %i\n",arr[1],arr[3]);
    int t=arr[1];
    arr[1]=arr[3];
    arr[3]=t;
    printf("arr[1]: %i ,arr[3]: %i\n",arr[1],arr[3]);

}

