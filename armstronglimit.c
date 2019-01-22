#include<stdio.h>
void main()
{
int n,m,n1,t=0,c,i;
scanf("%d%d",&n,&m);
for(i=n;i<m;i++)
{
c=n;
while(n>0)
{
n1=n%10;
t=t+(n1*n1*n1);
n=n/10;
}
if(t==c)
{
printf(" armstrong number");
}
else
{
printf(" not an armstrong");
}
}
}
