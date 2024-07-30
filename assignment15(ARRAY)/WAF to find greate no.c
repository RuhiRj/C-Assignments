// Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
int greatestno(int arr[]);
int main()
{
    int array[5],i;
    printf("enter the number:");
    for(i=0; i<=4; i++)
        scanf("%d",&array[i]);
    printf(" greatest valueis=%d ",greatestno(array));
    return 0;
}
int greatestno(int arr[])
{
    int i;
    int max=arr[0];
    for(i=0; i<=4; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
