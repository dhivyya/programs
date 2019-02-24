#include<stdio.h>
int main()
{
    char a[100];
    int i,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i+=3)
    {
     printf("%c",a[i]);   
    }
    return 0;
}
