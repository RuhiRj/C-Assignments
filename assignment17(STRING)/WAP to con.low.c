//Write a program to convert a given string into lowercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[10],i;
    printf("enter the string:");
    //for(i=0;i<10;i++)
    fgets(str,10,stdin);
    printf("lower string is=%s",strlwr(str));
        return 0;
}
