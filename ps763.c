#include<stdio.h>
void main()
{
    int i,a[10],b[10],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            printf("%d",a[i]);
        }
    }
}
