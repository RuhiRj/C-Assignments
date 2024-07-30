// Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,cou;
    printf("enter the natural number:");
    scanf("%d",&n);
    cou=countnumber(n);
    printf("sum of square values is=%d ",cou);
    return 0;
}
void countnumber(int p)
{
    int count=0,rem;
    if(p==0)
        return ;
    rem=p%10;
    count+=1;
    //printf("%d ",count);
    countnumber(p/10);
    return count;
}
