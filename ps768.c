#include<stdio.h>
void main()
{
    int a[100],i,n,c=1,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
        if(c>l)
        {
            l=c;
        }
    }
    printf("%d",c);
}
