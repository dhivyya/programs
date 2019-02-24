#include<stdio.h>
int main()
{
    int n,a[10],i,f=0,j;
    scanf("%d",&n);
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
            f=1;
            break;
        }
        }
    }
    if(f==1)
    printf("no");
    else
    printf("yes");
    return 0;
}
