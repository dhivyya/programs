#include <stdio.h>
#include<string.h>

void main()
{
    char a[200];
    int i,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if((a[i]>='a')&&(a[i]<='z'))
        {
            a[i]=a[i]-32;
        }
        else
        a[i]=a[i]+32;
    }
    printf("%s",a);

}
