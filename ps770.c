#include<stdio.h>
void main()
{
    char a[100],b[]={'A','n','s','w','e','r'};
    int i,n;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
    printf(" ");
    printf("%s",b);
}
