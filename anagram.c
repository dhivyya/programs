#include <stdio.h>
#include<string.h>
int main()
{
    int i,n,s,z=0,c=0,temp=0,l,j;
    char a[100];
    char b[]="kabali";
    
    scanf("%d",&s);
    n=strlen(b);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            }
        }
    }
    while(z<s)
    {
        scanf("%s",a);
        l=strlen(a);
        if(n==l)
        {
        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;                
            }
        }
    }
    
    if(strcmp(a,b)==0)
    {
        c++;
    }
    }
    z++;
    }
    printf("%d",c);
    return 0;
}
