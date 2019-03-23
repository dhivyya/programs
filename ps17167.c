#include<stdio.h>
int main()
{
    char a[10],i,j,f;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            i++;
        }
    }
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            f++;
        }
    }
    if(f==1)
    {
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
