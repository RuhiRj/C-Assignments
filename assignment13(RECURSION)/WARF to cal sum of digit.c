//Write a recursive function to calculate sum of digits of a given number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,summ;
    printf("enter the natural number:");
    scanf("%d",&n);
    summ=sumofdigit(n);
    printf("sum of digit values is=%d ",summ);
    return 0;
}
int sumofdigit(int sum)
{
    int rem;
    if(sum==0)
        return ;
    rem=sum%10;
    return rem+sumofdigit(sum/10);

}
