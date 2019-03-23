#include <stdio.h>

int main()
{
    int n,a[100],i=0,r,j,k,t;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        a[i]=r;
        i++;
        n=n/10;
    }
    for(j=0;j<i;j++)
    {
       for(k=j+1;k<i;k++)
       {
           if(a[k]>a[j])
           {
               t=a[j];
               a[j]=a[k];
               a[k]=t;
           }
       }
    }
    for(j=0;j<i;j++)
    {
    printf("%d",a[j]);
}
    return 0;
}
