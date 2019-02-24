
#include<stdio.h>
void main()
{
    int n,i,f=0,p=1,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            p=p*2;
            if(p==n)
            {
                f=1;
                break;
            }
        }
    }
    if((f==1)||(n==1))
    {
        printf("yes");
    }
    else
    printf("no");
}

