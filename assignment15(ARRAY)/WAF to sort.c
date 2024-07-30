//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf(" the shortest value is=%d",sort(arr,n));
    return 0;
}
int sort(int array[],int p)
{
    int i,j,temp;
    for(i=0; i<p; i++)
    {
        for(j=1+i; j<p; j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    return array[0];

}
