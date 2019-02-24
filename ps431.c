#include<stdio.h>
int main()
{
    char a[100];
    int i,l,c=0,c1=0;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
{
    if(a[i]=='(')
    {
        c++;
    }
}
for(i=0;i<l;i++)
{

if(a[i]==')')
    c1++;
}

if(c==c1)
{
    printf("yes");
}
else
printf("no");
return 0;
}
