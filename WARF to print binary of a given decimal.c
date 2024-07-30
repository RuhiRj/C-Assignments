//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the natural number:");
    scanf("%d",&n);
    decimalnumber(n);
    return 0;
}
void decimalnumber(int p)
{
    int n,b;
    if(p==0)
        return ;
    n=p%2;
    decimalnumber(p/2);
    printf("%d ",n);
}
