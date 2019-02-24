#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],n;
    int l=0,i;
    gets(a);
    scanf("%c",&n);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==n)
        {
            printf("%d",i+1);
            break;
        }
    
        
    }
    
    return 0;
}
