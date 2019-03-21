#include<stdio.h>
int main()
{
    int n,a[1000],i,j,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        z=a[i]+z;
    }
    printf("%d",z);
}
