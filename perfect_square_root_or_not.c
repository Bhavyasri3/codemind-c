#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<=t;i++)
    {
      if(t==(i*i))
      {
          printf("True");
          return 0;
      }
    }
    printf("False");
    return 0;
}