//Write a recursive function to print first N natural numbers
#include<stdio.h>
#include<conio.h>
int natural(int );
int main()
{
    int n;
    printf("enter the numbers:");
    scanf("%d",&n);
    natural(n);
    return 0;
}
int natural(int p)
{
    if(p==0)
        return ;
    natural(p-1);
    printf("%d ",p);

}
