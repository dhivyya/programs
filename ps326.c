#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            a[i]='$';
            break;
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            a[i]='*';
        }
    }
    for(i=0;i<l;i++)
    {
        if(a[i]=='$')
        {
            a[i]=' ';
        }
        if(a[i]!='*')
        {
            printf("%c",a[i]);
        }
        }
    }
