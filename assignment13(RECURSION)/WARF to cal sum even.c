// Write a recursive function to calculate sum of first N even natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum;
    printf("enter the natural number:");
    scanf("%d",&n);
    sum=sumofeven(n);
    printf("%d ",sum);
    return 0;
}
int sumofeven(int n)
{
    //int n=0;
    if(n==0)
        return ;
    return (2*n)+sumofeven(n-1);

}
