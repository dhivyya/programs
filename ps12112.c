#include<stdio.h
void main()
{
    int l,a[100],i,s;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=l;i++)
    {
        s=s+i;
    }
    printf("%d",s);
    }
