#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int a1,b1,len,l,c;
    gets(a);
    gets(b);
    l=strlen(a);
    c=strlen(b);
    a1=l-c;
    b1=0;
    while(a1<l && b1<c)
    {
        if(a[a1]==b[b1])
        {
            len++;
        }
        a1++;
        b1++;
    }
    if(len==c)
    {
        printf("yes");
        
    }
    else
    printf("no");

    return 0;
}
