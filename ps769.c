#include<stdio.h>
void main()
{
    int a[100],i,n,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-k;i++)
    {
    
    printf("%d",a[i]);
}
}
