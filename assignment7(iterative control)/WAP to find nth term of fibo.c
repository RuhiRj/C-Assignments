//1. Write a program to find the Nth term of the Fibonacci series.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,sum=0,n;
    printf("enter the nth terms:");
    scanf("%d" ,&n);
    while(n)
    {
        b=a+b;
        n-=1;
         printf("%d ",b);

    }
    //printf("%d ",a);
    return 0;

}
