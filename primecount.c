#include<stdio.h>
void main()
{
int i,j,n,m,f,c=0;
scanf("%s=d%d",&n,&m);
for(i=n;i<m;i++)
{
int f=0;
for(j=2;j<i/2;j++)
{
if(i%j==0)
{
f=1;
break;
}
else
{
c++;
}
}
}
if(f==0)
{
printf("%d",c);
}
getch();
}
