//Write a recursive function to print first N odd natural numbers in reverse order
#include<stdalign.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the natural number:");
    scanf("%d",&n);
    oddrev(n);
    return 0;
}
void oddrev(int p)
{
  if(p==0)
    return ;
    printf("%d ",(2*p-1));
    oddrev(p-1);
}

