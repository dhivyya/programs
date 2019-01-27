#include <stdio.h>

int main()
{
    char a[10];
    int c=0,i;
scanf("%s",&a)
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(a[i]>=1&&a[i]<=9)
        {
            printf("Yes");
        
        }
        else
        printf("No");
        
    }
return 0;
}
