#include <stdio.h>

int main()
{
    int n,m,i,a[10],j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
m=n/2;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
printf("%d",a[m]);
return 0;
}
