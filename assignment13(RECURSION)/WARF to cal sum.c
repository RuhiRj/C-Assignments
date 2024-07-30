//Write a recursive function to calculate sum of first N natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum;
    printf("enter the natural number:");
    scanf("%d",&n);
    sum=sumofnatural(n);
    printf("%d ",sum);
    return 0;
}
int sumofnatural(int sum)
{
    if(sum==0)
        return 0;
    return sum+sumofnatural(sum-1);
}
