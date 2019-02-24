#include<stdio.h>

int main()
{
    int n,c=0,k,r;
    scanf("%d%d",&n,&k);
    while(n)
    {
        r=n%10;
        if(r==k)
        {
            c=c+1;
        }
        n=n/10;
    }
    printf("%d",c);
    return 0;
}
