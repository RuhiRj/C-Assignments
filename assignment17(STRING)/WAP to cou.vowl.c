//3. Write a program to count vowels in a given string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n;
    printf("enter the number of the string:");
    scanf("%d",&n);
    char str[n],i;
    int count=0;
    printf("enter the string:");
    for(i=0; i<n; i++)
    {
        scanf("%c",&str[i]);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            count+=1;
    }
    printf("%d ",count);
    return 0;
}
