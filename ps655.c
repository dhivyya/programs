#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,l,c,f=1;
    gets(a);
    gets(b);
l=strlen(a);
c=strlen(b);
if(l==c)
{
    for(i=0;i<l;i++)
    {
        if(a[i]==b[i])
        {
            f=0;
        }
        else
        f=1;
        
    }
}

if(f==0)
{
    printf("yes");
}
else
printf("no");
    return 0;
}
