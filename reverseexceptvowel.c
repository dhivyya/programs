#include <stdio.h>

int main()
{
    char a[100];
    int i,n,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
    l=strlen(a);
for(i=0;i<l;i++)
{
    if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
    {
        a[i]='*';
    }
}
for(i=l;i>0;i--)
{
    if(a[i]!='*')
    {
        printf("%c",a[i]);
    }
}
    return 0;
}
