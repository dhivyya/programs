#include<stdio.h>
int main()
{
    int a[100],i,n,temp,j,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    z=n/2;
    for(i=0;i<z;i++)
    {
       for(j=i+1;j<z;j++)
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
    for(i=z;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
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
        
