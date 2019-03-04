#include <stdio.h>

int main()
{
    int m,a[100],i,n,temp,j,k,b[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        a[n]=b[i];
        n++;
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
        printf("%d",a[i]);
    }

    
    return 0;
}
