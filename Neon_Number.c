#include<stdio.h>
int main()
{
    int i,n,r,sum=0;
    scanf("%d",&n);
    i=n*n;
    while(i>0)
    {
      r=i%10;
      sum=sum+r;
      i=i/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}