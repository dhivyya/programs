#include<stdio.h>
int main()
{
    int a[100],n,l,r,i,m;
    scanf("%d%d%d",&n,&l,&r);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=a[l-1];
    for(i=l;i<=r;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
        }
    }
    printf("%d",m);
    return 0;
}
