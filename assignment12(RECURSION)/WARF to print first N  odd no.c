//Write a recursive function to print first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n ;
    printf("enter the natural number");
    scanf("%d",&n);
    oddnatural(n);
    return 0;
}
void oddnatural(int p)
{
    if(p==0)
        return ;
    oddnatural(p-1);
    printf("%d ",(2*p-1));


}
