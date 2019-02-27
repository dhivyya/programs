#include <stdio.h>

int main()
{
    int n,a,b,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<b)
        {
            c=c+1;
        }
    }
    printf("%d",c);

    return 0;
}
