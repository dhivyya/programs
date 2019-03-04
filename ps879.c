#include <stdio.h>

int main()
{
    int m,a[100],i,n,temp,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            
    if(a[i]<a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
        }
    }
    m=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        k=a[i]-a[j];
        if(k>m)
        {
            m=k;
        }
    }
    }
printf("%d",m);
    return 0;
}
