/*2. Write a function to find the smallest number from the given array of any size. (TSRS)*/
#include<stdio.h>
#include<conio.h>
int smallestno(int array[],int );
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("smallest number is=%d",smallestno(arr,n));
    return 0;
}
int smallestno(int array[],int p)
{
    int i,j,temp=0;
   // int min=array[0],i;
   // for(i=0; i<p; i++)
    //{
      //  if(min>array[i])
        //{
          //  min=array[i];
        //}

    //}
    //return min;
    for(i=0;i<p;i++){
        for(j=0;j<p;j++){
            if(array[i]<array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    return array[0];
}
