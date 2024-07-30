//Write a recursive function to print octal of a given decimal number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the natural number:");
    scanf("%d",&n);
    octadecimal(n);
    return 0;
}
void octadecimal(int p)
{
    int rem;
    if(p==0)
        return ;
    rem=p%8;
    octadecimal(p/8);
    printf("%d ",rem);
}
