#include<stdio.h>

void main()
{
int n,n1,r,b,c=0,p=1;

scanf("%d",&n);
n1=n;
while(n1>0)
{
    r=n1%2;
    b=b+r*p;
    n1/=2;
    c++;
    p=p*10;
}
if(n==0)
printf("1");
else
printf("%d",c);
}
