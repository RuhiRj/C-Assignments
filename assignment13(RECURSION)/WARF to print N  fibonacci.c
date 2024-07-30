// Write a recursive function to print first N terms of Fibonacci series.
#include<stdio.h>
#include<conio.h>
void fibonacci(int );
void fibonacci(int );
int main()
{
    int n,fib;
    printf("enter the natural number:");
    scanf("%d",&n);
    fibonacci(n);
    //printf("Fibonacci series of given number is=%d ",fib);
    return 0;
}
void fibonacci(int p)
{
    int fib,a=0,b=1;
    if(p==0)
        return ;
    b=a+b;
    fib=fibonacci(p-1);
    printf("%d ",fib);
}
