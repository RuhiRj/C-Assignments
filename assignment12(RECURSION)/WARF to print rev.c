//Write a recursive function to print reverse of a given number.
#include<stdio.h>
#include<conio.h>
int main()
{

    int n;
    printf("enter the number:");
    scanf("%d",&n);
    revnumber(n);
    return 0;
}
void revnumber(int p)
{
    int rem=0;
    if(p==0)
        return ;
    rem=p%10;
    printf("%d ",rem);
    revnumber(p/10);
}
