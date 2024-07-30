/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n;
    printf("enter the number of the string:");
    scanf("%d",&n);
    char str[n],i;
    for(i=0; i<=n; i++)
        scanf("%c",&str[i]);
    int count=0,co=0,cou=0;
    //  printf("enter the characters:");
    //for(i=0; i<=9; i++)
    //{
    //  scanf("%c",&str[i]);
    //}
    //fgets(str,10,stdin);
    for(i=0; i<=n; i++)
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count+=1;
        }
    printf("total no of the alphabets %d\n",count);
    for(i=0; i<=n; i++)
        // if(str[i]=='0' || str[i]=='1'|| str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6'|| str[i]=='7'|| str[i]=='8'|| str[i]=='9')
        if(str[i]>='0' && str[i]<='9')
        {
            cou+=1;
        }
    printf("total no of the digit %d\n",cou);
    for(i=0; i<=n; i++)
        if(str[i]=='%' || str[i]=='/' || str[i]=='*' || str[i]=='^')
        {
            co+=1;
        }
    printf("total no of special character %d \n",co);
    return 0;
}
