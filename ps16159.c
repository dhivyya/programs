#include<stdio.h>
int main()
{
    int a,b,r,i,j=0,a[10],c=0,n;
    scanf("%d %d",&a,&b);
    n=a*b;
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
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
