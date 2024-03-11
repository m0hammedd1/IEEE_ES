#include<stdio.h>
int main()
{
    int arr[]={5,4,7,8,7,84,8,4,987,548,4,4,8,4,1,74,3,4,48,8,14,8,9,1,48,4,1,8,2,4,5,9,6};
    int size=sizeof(arr)/4;
    int flag=0;
    int number;
    printf("enter a number\n");
    scanf("%i",&number);
    for(int i=0;i<size;i++)
    {
        if(number==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag) printf("number was found :)\n");
    else printf("number was not found :(\n");
}
