#include<stdio.h>
int main()
{
    int a[100],i,n,l=0,l1=0,z,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            l++;
            z=a[i];
        }
        else
        {
            l1++;
            y=a[i];
        }
    }
    if(l==1)
    {
        printf("%d",z);
    }
    else
    printf("%d",y);
    return 0;
}
