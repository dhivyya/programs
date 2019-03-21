#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,l,j;
    gets(a);
    l=strlen(a);
    //printf("%d",l);
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
        if(a[i]==a[j])
        {
         a [j]=toupper(a[j]);   
        }
    }
   a[i]=toupper(a[i]);
    }
   
printf("%s",a);
    return 0;
}
