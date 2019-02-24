#include <stdio.h>

int main()
{
    char a[100];
    int i,l=0;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        l++;
    }
printf("%d",l);
    return 0;
}
