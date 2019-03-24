#include <stdio.h>

int main()
{
    int a,b,c,i=0,r,q[100],j,z=0;
    scanf("%d %d",&a,&b);
    c=a^b;
    while(c)
    {
        r=c%2;
        c=c/2;
        q[i]=r;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(q[j]==1)
        {
            z++;
        }
    }
    printf("%d",z);
    return 0;
}
