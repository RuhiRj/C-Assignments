// Write a program to convert a given string into uppercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[10],i;
    //for(i=0;i<10;i++)
   // gets(str);
    fgets(str,10,stdin);
    printf(" upper string is=%s",strupr(str));
    return 0;
}
