#include <stdio.h>
int main()
{
    int n,f,d,i,s=0;
    scanf("%d%d%d",&n,&f,&d);
for(i=0;i<n;i++)
{
        s=s+f;
        f=f+d;
    }
    printf("%d",s);

    return 0;
}
