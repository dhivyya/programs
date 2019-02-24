#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],n[100];
    int j,i,c=0,l1,l2;
    gets(a);
    gets(n);
    l1=strlen(a);
    l2=strlen(n);
    if(l1==l2)
    {
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
        if(a[i]==n[j])
        {
            c=1;
            break;
            }
    }
    }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    printf("no");
    return 0;
}
