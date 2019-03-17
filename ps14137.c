#include<stdio.h>
int main()
{
    int n,r,i,j=0,a[100],z,k;
    scanf("%d",&n);
    while(n)
    {
        r=n%2;
        a[j]=r;
        j++;
        n=n/2;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]==1)
        {
            z=i;
            break;
        }
    }
    printf("%d",z+1);
    return 0;
}
