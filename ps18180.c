#include <stdio.h>

int main()
{
    int a,r,q=0,c=1,i,j=2,z=1,d;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        q=q+(c*r);
        c=c*2;
    }
        for(i=q;i<q*2;i++)
        {
            d=i;
            z=1;
            while(d)
            {
            z=z*j;        
            d--;
            if(z==i)
            {
                break;
            }
            }
            if(z==i)
            {
                break;
            }
        }
    
    printf("%d",z);

    return 0;
}
