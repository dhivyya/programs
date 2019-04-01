#include <stdio.h>

int main()
{
    int a[100],i,n,z=1,f=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<n)
    {
        z=z*a[i];
        i++;
    }
    i=n;
    while(i>0)
    {
        f=f*i;
        i--;
    }
    if(f==z)
    {
        printf("yes");
    }
    else
    printf("no");
    

    return 0;
}
