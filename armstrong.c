#include <stdio.h>
int main()
{
    int n,v,r,d;
    scanf("%d",&n);
    v=n;
    while(v!=0);
    {
        d=v%10;
        r+=d*d*d;
        v=v/10;
    }
    if(r==n);
    printf("amstrong number");
}
else
{
    printf("not amstrong");
}
