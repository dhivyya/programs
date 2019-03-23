#include<stdio.h>
int main()
{
    int z,y,f1=1,f2=1,i,j,ans;
    scanf("%d%d",&z,&y);
    for(i=1;i<=z;i++)
    {
        f1=f1*i;
    }
    for(j=1;j<=y;j++)
    {
        f2=f2*j;
    }
    ans=f1/f2;
    printf("%d",ans);
    return 0;
}
