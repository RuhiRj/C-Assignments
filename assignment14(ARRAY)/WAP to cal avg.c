/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,arr[10],i,n,count,avg;
    printf("enter the ten numbers:");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        count+=1;
        sum=sum+arr[i];
        avg=sum/count;
    }
    printf("sum of ten numbers is=%d",sum);
    printf("average of the ten number is%d \n",avg);
    return 0;

}
