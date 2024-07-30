/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,arr[10],i,n,oddsum=0,evensum=0;
    printf("enter the ten numbers:");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        oddsum=oddsum+arr[i];
    }
    for(i=0; i<=9; i++)
    {
        if(arr[i]%2==0)
        evensum=evensum+arr[i];
    }
    printf("sum of all odd numbers is=%d\n",oddsum);
    printf("sum of the even numbers is=%d \n",evensum);
    return 0;

}
