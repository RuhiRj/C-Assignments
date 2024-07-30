//Write a recursive function to print first N even natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the natural numnber:");
    scanf("%d",&n);
    evennatural(n);
    return 0;
}
void evennatural(int p)
{
    if(p==0)
        return;
    evennatural(p-1);
    printf("%d ",2*p);
}
