#include <stdio.h>

int main()
{
    int a,b[100],n,r,l;
    scanf("%d",&a);
    n=0;
    while(a)
    {
        r=a%10;
        a=a/10;
        b[n]=r;
        n++;
    }
    printf("%d",b[0]+b[n-1]);
    return 0;
}
