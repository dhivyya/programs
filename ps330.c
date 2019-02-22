#include <stdio.h>

int main()
{
    char a[200],b[200];
    int l,i,k,n,count=0;
    gets(a);
    gets(b);
    l=strlen(a);
    n=strlen(b);
    scanf("%d",&k);
    if(l==n)
    {
        for(i=0;i<l;i++)
        {
            if(a[i]!=b[i])
            {
                count++;
            }
        }
    }
if(count==k)
{
    printf("yes");
}
else
printf("no");
    return 0;
}

