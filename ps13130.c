#include<stdio.h>
void main()
{
    int a[10],i,n,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        z=z+a[i];
        if(z%2==0)
        {
            printf("%d ",z);
        }
        else
        {
            printf("%d ",a[i]);
       }    
        
    }
}
