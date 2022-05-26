#include<stdio.h>
int main()
{
    int t,i,sum;
    scanf("%d",&t);
    while(sum!=1&&sum!=4)
    {
        sum=0;
        while(t>0)
        {
        i=t%10;
        sum=sum+(i*i);
        t=t/10;
        }
        t=sum;
    }
    if(sum==1)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
}