//Write a program to reverse a string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[10],i;
    fgets(str,10,stdin);
    printf("reverse string is=%s",strrev(str));
    return 0;

}
