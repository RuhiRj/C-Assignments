// Write a program in C to copy one string to another string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[10],str1[10];
    fgets(str,10,stdin);
    strcpy(str1,str);
    printf(" copy of the string %s",str1);
    return 0;
}
