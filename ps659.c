#include <stdio.h>

int main()
{
    int n,a[100],i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            l=i;
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}
