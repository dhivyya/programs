#include <stdio.h>

int main()
{
    int k[10],x,i,n,f=0;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k[i]+k[i+1]==x)
        {
        f=1;
        }
    }
    if(f==1)
    {
        printf("yes");
    }
else
printf("no");
    return 0;
}
