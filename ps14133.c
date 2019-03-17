#include<stdio.h>
int main()
{
    int i,m,n,c=0,a,b;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
       scanf("%d%d",&a,&b); 
    }
    for(i=0;i<n;i++)
    {
        if(b==m)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("yes";)
    }
    else
    printf("no");
    return 0;
}
