#include <stdio.h>
int main()
{
    int n,p,a[100],j,i,k,m=0;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    while(j<p)
    {
        scanf("%d",&k);
        a[n]=k;
        n++;
        for(i=0;i<n;i++)
        {
            if(a[i]>m)
            {
                m=a[i];
            }
        }
    
    printf("%d ",m);
    
    j++;
    }
    return 0;
}
