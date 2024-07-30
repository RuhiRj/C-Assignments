// Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[6];
    int i,count;
    printf("enter the characters of the string:");
    for(i=0; i<5; i++)
    {
        scanf("%c",&str[i]);
        count+=1;
        // count=strlen(str);
    }
    printf("%d ",count);
    return 0;
}
