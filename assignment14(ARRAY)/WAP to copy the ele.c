/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,j,ar[10],k;
    printf("enter the ten numbers:");
    for(i=0; i<=9; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<=9; i++)
    {
        ar[j]=arr[i];
    }
    for(j=0;j<=9;j++)
    printf("%d ",ar[j]);
    return 0;
}
