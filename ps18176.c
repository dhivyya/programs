#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],i,j,k,c=0;
    gets(a);
    gets(b);
    for(k=0;b[k]!='\0';k++)
    {
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                c++;
                b[j]='&';
            }
        }
    }
    }
    if(c==k)
     printf("true");
  
    else
    printf("false");
   return 0;
}
