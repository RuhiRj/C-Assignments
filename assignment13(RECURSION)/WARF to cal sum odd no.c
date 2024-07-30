//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int sumofodd(int);
int main()
{
    int n,sum;
    printf("enter the natural number:");
    scanf("%d",&n);
    sum=sumofodd(n);
    printf("%d ",sum);
    return 0;
}
int sumofodd(int n)
{
    //int n=0;
    if(n==0)
        return ;
    return (2*n-1)+sumofodd(n-1);
}
