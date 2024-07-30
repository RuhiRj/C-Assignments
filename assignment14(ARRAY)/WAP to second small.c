/*Write a program to find the second smallest number in an array.Take array values
from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,j,temp;
    printf("enter the ten numbers:");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<=9; i++)
    {
        for(j=1+i; j<=9; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   // for(i=0; i<=9; i++)
        printf("%d",arr[1]);
    return 0;
}

