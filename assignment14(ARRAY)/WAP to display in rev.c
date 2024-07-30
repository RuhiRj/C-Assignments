/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,j,temp,rem[10],rev[10],l,k;
    printf("enter the ten numbers:");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<=9; i++)
    {
        for(j=1+i; j<=9; j++)
        {
            while(arr[i]!=0)
            {
                rem[k]=arr[i]%10;
                rev[l]=rem[k]+(rev[l]*10);
                arr[i]=arr[j]/10;
            }
        }
    }
    printf("%d",rev[l]);
    return 0;
}
