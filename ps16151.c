#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,l,z=0,y=0,x=0;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if((a[i]=='a'||a[i]=='b'))
        {
            z++;
        }
}
if((z==l)||(z==l-1))
{
    printf("yes");
}

else
printf("no");
return 0;
}
