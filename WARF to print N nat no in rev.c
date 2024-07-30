// Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the natural number:");
    scanf("%d",&n);
    revnatural(n);
    return 0;
}
void revnatural(int p)
{
    int a;
    if(p==0)
        return 0;
        printf("%d ",p);
    revnatural(p-1);



}
