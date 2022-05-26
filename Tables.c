#include<stdio.h>
int main()
{
    int n,r,i,pro;
    scanf("%d%d",&n,&r);
    for(i=0;i<=r;i++)
    {
        if(i%2!=0)
        {
            pro=n*i;
            printf("%d x %d = %d
",n,i,pro);
        }
    }
}