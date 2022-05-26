#include<stdio.h>
int main()
{
    int t,i,l=0;
    scanf("%d",&t);
    while(t>0)
    {
        i=t%10;
        if(i>l)
        {
            l=i;
        }
        t=t/10;
    }
    printf("%d",l);
}