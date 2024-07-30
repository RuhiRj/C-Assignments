/*Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,arr[10],i,n;
    printf("enter the ten numbers:");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum of ten numbers is=%d",sum);
    return 0;

}
