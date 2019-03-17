#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n,c=0,c1=0,z;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a')
    
        {
            c++;
        }
        else if(a[i]=='b')
        {
            c1++;
        }
        else
         break;
    }
    z=c+c1;
    if(z==n)
    {
        printf("yes");
    }
else
printf("no");
    return 0;
}
