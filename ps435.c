#include<stdio.h>

int main()
{
    char a[100];
    int i,c,j;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        c=0;
        for(j=0;a[j]!=NULL;j++)
        {
     if(a[i]==a[j])
     {
         c++;
     
    }
        }
    if(c==1)
    
        printf("%c",a[i]);
    
    }
    
    return 0;
}
