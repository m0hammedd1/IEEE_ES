#include<stdio.h>
int main()
{
    int arr[]={5,4,7,8,7,84,8,4,987,548,4,4,8,4,1,74,3,4,48,8,14,8,9,1,48,4,1,8,2,4,5,9,6};
    int size=sizeof(arr)/4;
    int t=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
              t=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%i ",arr[i]);
    }

}
