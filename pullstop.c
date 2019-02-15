#include <stdio.h>

int main()
{
    char a[100];
    int l=0,i;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
{
    l++;
}
for(i=0;i<=l;i++)
{
    printf("%c",a[i]);
if(i==l)
{
    printf(".");
}
}
    return 0;
}
