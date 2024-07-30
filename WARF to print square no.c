//Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the natural number:");
    scanf("%d",&n);
    squarenumber(n);
    return ;
}
void squarenumber(int p)
{
    if(p==0)
        return ;
    squarenumber(p-1);
    printf("%d ",p*p);
}
