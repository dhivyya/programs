#include<stdio.h>
int main()
{
int i,n,r=1,p;
scanf("%d",&n);
scanf("%d",&p);
for(i=0;i<p;i++)
{
r=r*n;
}
printf("%d",r);
return 0;
}
