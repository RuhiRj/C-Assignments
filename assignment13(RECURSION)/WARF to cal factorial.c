//Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
#include<conio.h>
int factorial(int );
int main()
{
    int n,fac;
    printf("enter the natural number:");
    scanf("%d",&n);
    fac=factorial(n);
    printf("factorial of given number values is=%d ",fac);
    return 0;
}
int factorial(int n)
{
    int facto=1;
    if(n==1)
        return ;
       // facto=facto*fa;
    return n*factorial(n-1);
}

