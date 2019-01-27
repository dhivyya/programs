#include <stdio.h>

int main()
{
    int n,i,a[10],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    }
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
