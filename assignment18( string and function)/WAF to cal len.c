//1. Write a function to calculate length of the string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void strlen(char str1[]);
int main()
{
    int n;
    char str[10];
   // printf("enter the number of the characters:");
    //scanf("%d",&n);
   // char str[n],i;
    //int strlenght;
    //for(i=0; i<n; i++)
        //scanf("%s",str);
    strlen(str);
   // printf("%d ",strlenght);
}
void strlen(char str1[])
{
    int i,n;
    //printf("enter the number of the characters:");
    //scanf("%d",&n);
    for(i=0; i<=9; i++)
        scanf("%s",str1);
        printf("%d ",str1);
        //return i;
}
