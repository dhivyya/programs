#include<stdio.h>
void main()
{
int i,n,f,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=0;
for(j=1;j<=n;j++)
{
if(i%j==0)
f++;
}
if(f==2)
printf("%d",i);
}
getch();
}
