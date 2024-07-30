//Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int temp=0,arr[10],i,n,j;
    printf("enter the ten numbers:");
    for(i=0; i<=9; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<=9; i++)
    {
        for(j=1+i; j<=9; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
            }
        }
    }
    printf("the greatest number of the array is=%d ",temp);
    return 0;
}
