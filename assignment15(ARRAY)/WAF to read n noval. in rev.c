//Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
#include<conio.h>
int reverse(int ar[],int );
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
        reverse(arr,n);
    return 0;
}
int reverse(int ar[],int p)
{
    int i,ar[p],rev[p],rem[p];
    for(i=0; i<p; i++)
    {
        rem[p]=ar[i]%10;
        rev[p]=rev[p]*10+rem[p];
        ar[i]=ar[i]/10;

    }
    printf("%d ",rev[p]);
   // for(i=0;i<p;i++)
     //   printf("%d ",ar[i]);
}
