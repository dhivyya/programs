#include<stdio.h>
int main()
{
    int a[100],k,n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
        }
    }
    if(c!=0)
    {
        printf("yes");
        printf("%d",c);
        
    }
    else
    printf("no");
    return 0;
}
