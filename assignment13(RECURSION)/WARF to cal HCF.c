//Write a recursive function to calculate HCF of two numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,rem;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    rem=calhcf(a,b);
    printf("hcf value is=%d",rem);
    return 0;
}
int calhcf(int p,int q)
{
    int n;
    if(p==0 ||q==1)
        return ;
   // n=p/2;
    return calhcf(p%q);
}
