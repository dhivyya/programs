#include <stdio.h>

int main()
{
    int n,a[10],i,j,temp,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
}
for(i=0;i<n;i++)
{
if(i==k)
     printf("%d",a[i-1]);
}
    return 0;
}
