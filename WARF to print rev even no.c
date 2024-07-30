//Write a recursive function to print first N even natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the natural number:");
    scanf("%d",&n);
    revevenno(n);
    return 0;
}
void revevenno(int p)
{
    if(p==0)
        return ;
    printf("%d ",2*p);
    revevenno(p-1);
}
