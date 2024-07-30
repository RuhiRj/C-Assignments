/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,j,temp=0;
    printf("enter the ten numbers:");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<=9; i++)
    {
        for(j=1+i; j<=9; j++)
        {
            if(arr[i]<arr[j])
                temp=arr[i];
        }
        printf(" the smallest value of the array is=%d",temp);
    }
    //printf(" the smallest value of the array is=%d",temp);
    return 0;
}
