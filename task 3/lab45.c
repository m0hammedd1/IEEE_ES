#include<stdio.h>
int main()
{
    int x=0;
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int h=0;h<3;h++)
        {
            arr[i][h]=++x;
            printf("%i ",arr[i][h]);
        }
        printf("\n");
    }

}
