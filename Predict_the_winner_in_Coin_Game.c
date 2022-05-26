#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d%d",&n,&i);
    if(n%2==0 || i%2==0)
    {
    printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
}