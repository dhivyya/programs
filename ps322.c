#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a;
    }
    else
    {
    c=b;
    }
    for(i=c;i>=2;i--)
{
    if((a%i==0)&&(b%i==0))
    {
        printf("%d",i);
        break;
    }
}
return 0;
}
