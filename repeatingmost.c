#include <stdio.h>

int main()
{
    char a[100];
    int n,i,c=1,max=1,result;
    for(i=0;a[i]!=NULL;i++)
    {
    scanf("%[^\n]",a);
}
n=strlen(a);
for(i=0;i<n;i++)
{
    if(a[i]==a[i+1])
    {
        c+=1;
    }
    if(c>max)
    {
        max=c;
        result=a[i];
    }
}
printf("%c",result);
    return 0;
}
