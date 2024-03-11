#include<stdio.h>
#include<math.h>
void toBinary(int x);
int main()
{
    int x=0;
    printf("enter a number\n");
    scanf("%i",&x);
    printf("number in binary : ");
    tobinary(x);

}
void tobinary(int x)
{
    int size=log2(x)+1;
    int arr[size];
    for(int i=size-1;i>=0;i--)
    {
        arr[i]=x%2;
        x/=2;
    }
    for(int i=0;i<size;i++)
    {
        printf("%i",arr[i]);
    }
    printf("\n");
}
