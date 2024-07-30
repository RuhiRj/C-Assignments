//Write a recursive function to calculate sum of squares of first n natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum;
    printf("enter the natural number:");
    scanf("%d",&n);
    sum=sumofsquare(n);
    printf("sum of square values is=%d ",sum);
    return 0;
}
int sumofsquare(int n)
{
    //int n=0;
    if(n==0)
        return ;
    return (n*n)+sumofsquare(n-1);

}
